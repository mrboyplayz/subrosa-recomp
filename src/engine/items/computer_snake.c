/* The computer's snake game (SNAKE.EXE, the computer's state 3): one tick.
   0x1400C9820 */
#include "items.h"

#define SNAKE_COLUMNS 31
#define SNAKE_ROWS 22
#define SNAKE_RING 64

#define SCREEN_COLUMNS 62

/* A screen row of text: the text, padded with blanks, in one colour. */
static void put_text_row(int i, int line, const char *text, uint8_t color)
{
    char *row = computer_line(i, line);
    uint8_t *colors = computer_line_colors(i, line);
    const char *next = text;
    for (int n = 0; n < SCREEN_COLUMNS; n++) {
        char c = *next;
        if (c != 0)
            next++;
        else
            c = ' ';
        row[n] = c;
        colors[n] = color;
    }
    row[SCREEN_COLUMNS] = 0;
}

static uint8_t cell_color(uint8_t cell)
{
    switch (cell) {
    case SNAKE_EMPTY: return 0x0F;
    case 1: return 0x7F;                 /* a wall */
    case SNAKE_BODY: return 0x1F;
    case SNAKE_HEAD: return 0x9F;
    default: return 0x2F;                /* food */
    }
}

/* The screen: the title with score and level, then board rows 1 to 23 (two
   columns a cell, in colours; rows 22 and 23 lie past the board's 22), and
   "GAME OVER!" on row 1 once the snake has run into something. Every line
   is then shared. 0x1400C8E10 */
void snake_draw(int i)
{
    char buffer[512] = {0};
    crt_sprintf(buffer, "  SNAKE    SCORE:%05d  LEVEL:%03d    Ctrl-X EXIT", snake_score(i), snake_level(i));
    put_text_row(i, 0, buffer, 0x70);
    for (int line = 1; line < 24; line++) {
        char *row = computer_line(i, line);
        uint8_t *colors = computer_line_colors(i, line);
        for (int n = 0; n < SCREEN_COLUMNS; n++) {
            row[n] = ' ';
            colors[n] = cell_color(snake_board(i, n >> 1, line));
        }
        row[SCREEN_COLUMNS] = 0;
    }
    if (snake_over(i)) {
        __builtin_memset(buffer, 0, 64);
        crt_sprintf(buffer, "                           GAME OVER!");
        put_text_row(i, 1, buffer, 0x0F);
    }
    for (int line = 0; line < 24; line++)
        computer_line_link(i, line);
}

#define SNAKE_WALL 1

static void wall(int i, int x, int y)
{
    snake_board(i, x, y) = SNAKE_WALL;
}

/* A new level: the board walled round (rows 22 and 23 cleared too), the
   walls of the level's layout (level & 7, each adding to the one before),
   two pieces of food in each quarter (where a drawn cell is taken it is
   drawn again, up to 512 times), and the snake, three cells at (15, 10)
   heading right. The level goes up, the first move waits 64 ticks.
   0x1400C92B0 */
void snake_start_level(int i)
{
    for (int y = 0; y < SNAKE_ROWS + 2; y++)
        for (int x = 0; x < 32; x++) {
            snake_board(i, x, y) = SNAKE_EMPTY;
            if (y == 0 || y == SNAKE_ROWS - 1)
                wall(i, x, y);
            if (y < SNAKE_ROWS - 1 && (x == 0 || x == SNAKE_COLUMNS - 1))
                wall(i, x, y);
        }

    uint32_t layout = (uint32_t)snake_level(i) & 7;
    if (layout >= 1) {
        for (int y = 2; y <= 8; y++)
            wall(i, 8, y);
        for (int y = 19; y >= 13; y--)
            wall(i, 22, y);
    }
    if (layout >= 2) {
        for (int y = 2; y <= 8; y++)
            wall(i, 22, y);
        for (int y = 19; y >= 13; y--)
            wall(i, 8, y);
    }
    if (layout >= 3)
        for (int x = 1; x <= 8; x++)
            wall(i, x, 11);
    if (layout >= 4)
        for (int x = 22; x <= 29; x++)
            wall(i, x, 11);
    if (layout >= 5)
        for (int x = 11; x <= 19; x++)
            wall(i, x, 4);
    if (layout >= 6)
        for (int x = 11; x <= 19; x++)
            wall(i, x, 17);
    if (layout >= 7) {
        wall(i, 22, 12);
        wall(i, 8, 1);
    }

    static const int corners[4][2] = {{1, 1}, {17, 1}, {17, 11}, {1, 11}};
    for (int quarter = 0; quarter < 4; quarter++)
        for (int piece = 0; piece < 2; piece++) {
            int x = crt_rand() % 12 + corners[quarter][0];
            int y = crt_rand() % 9 + corners[quarter][1];
            for (int tries = 0; snake_board(i, x, y) != SNAKE_EMPTY && tries < 512; tries++) {
                x = crt_rand() % 12 + corners[quarter][0];
                y = crt_rand() % 9 + corners[quarter][1];
            }
            if (snake_board(i, x, y) == SNAKE_EMPTY) {
                snake_board(i, x, y) = SNAKE_FOOD;
                snake_food_left(i) = (int32_t)((uint32_t)snake_food_left(i) + 1u);
            }
        }

    snake_head(i) = 0;
    snake_tail(i) = 0;
    snake_cell_x(i, 0) = 15;
    snake_cell_y(i, 0) = 10;
    for (int k = 0; k < 2; k++) {
        uint32_t head = ((uint32_t)snake_head(i) + 1u) & (SNAKE_RING - 1);
        snake_head(i) = (int32_t)head;
        snake_cell_x(i, head) = 15;
        snake_cell_y(i, head) = 10;
    }
    snake_board(i, 15, 10) = SNAKE_HEAD;
    snake_direction(i) = SNAKE_RIGHT;
    snake_level(i) = (int32_t)((uint32_t)snake_level(i) + 1u);
    snake_delay(i) = 64;
    snake_draw(i);
}

/* The cell k of the snake's ring, on the board. */
static uint8_t *ring_cell(int i, int64_t k)
{
    return &snake_board(i, snake_cell_x(i, k), snake_cell_y(i, k));
}

void computer_update_snake(int i)
{
    if (snake_over(i))
        return;
    snake_delay(i) = (int32_t)((uint32_t)snake_delay(i) - 1u);
    if (snake_delay(i) > 0)
        return;
    if (snake_food_left(i) == 0) {
        snake_start_level(i);
        return;
    }

    /* It moves faster each level, every 16 ticks at first, at most every 4. */
    int32_t delay = 16 - ((snake_level(i) >> 1) & ~3);
    if (delay < 4)
        delay = 4;
    snake_delay(i) = delay;

    /* The head moves one cell, wrapping round the board. Leaving on the
       left it comes back in the second column from the right. */
    uint32_t head = (uint32_t)snake_head(i);
    int32_t x = snake_cell_x(i, head & (SNAKE_RING - 1));
    int32_t y = snake_cell_y(i, head & (SNAKE_RING - 1));
    head = (head + 1) & (SNAKE_RING - 1);
    int32_t direction = snake_direction(i);
    snake_head(i) = (int32_t)head;
    if (direction == SNAKE_RIGHT) {
        int32_t next = (int32_t)((uint32_t)x + 1u);
        x = next < SNAKE_COLUMNS ? next : 0;
    } else if (direction == SNAKE_DOWN) {
        int32_t next = (int32_t)((uint32_t)y + 1u);
        y = next < SNAKE_ROWS ? next : 0;
    } else if (direction == SNAKE_LEFT) {
        x = (int32_t)((uint32_t)x - 1u);
        if (x < 0)
            x = SNAKE_COLUMNS - 1;
    } else if (direction == SNAKE_UP) {
        y = (int32_t)((uint32_t)y - 1u);
        if (y < 0)
            y = SNAKE_ROWS - 1;
    }
    snake_cell_x(i, head) = x;
    snake_cell_y(i, head) = y;

    /* Food: 5 points (the score is kept to 16 bits), one less to eat, and
       the tail grows by four cells. The last food ends the level after 32
       ticks. */
    if (snake_board(i, x, y) == SNAKE_FOOD) {
        snake_board(i, x, y) = SNAKE_EMPTY;
        snake_score(i) = (int32_t)(((uint32_t)snake_score(i) + 5u) & 0xFFFF);
        snake_food_left(i) = (int32_t)((uint32_t)snake_food_left(i) - 1u);
        if (snake_food_left(i) <= 0) {
            snake_delay(i) = 32;
            snake_food_left(i) = 0;
        }
        int32_t tail_x = snake_cell_x(i, snake_tail(i));
        int32_t tail_y = snake_cell_y(i, snake_tail(i));
        for (int k = 0; k < 4; k++) {
            uint32_t tail = ((uint32_t)snake_tail(i) - 1u) & (SNAKE_RING - 1);
            snake_tail(i) = (int32_t)tail;
            snake_cell_x(i, tail) = tail_x;
            snake_cell_y(i, tail) = tail_y;
        }
    }

    /* Running into anything ends the game. */
    if (*ring_cell(i, snake_head(i)) != SNAKE_EMPTY)
        snake_over(i) = 1;

    /* The tail leaves its cell; the rest of the snake is drawn on the board,
       the head last. */
    *ring_cell(i, snake_tail(i)) = SNAKE_EMPTY;
    uint32_t k = ((uint32_t)snake_tail(i) + 1u) & (SNAKE_RING - 1);
    snake_tail(i) = (int32_t)k;
    uint32_t end = (uint32_t)snake_head(i) & (SNAKE_RING - 1);
    for (; k != end; k = (k + 1) & (SNAKE_RING - 1))
        *ring_cell(i, k) = SNAKE_BODY;
    *ring_cell(i, k) = SNAKE_HEAD;
    snake_draw(i);
}
