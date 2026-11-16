#include "camera.h"
#include "gl.h"
#include "model_draw.h"
#include "renderer.h"

void model_draw_at(int model, const float position[3], const float rotation[9], float size)
{
    const ModelMesh *mesh = &model_meshes[model];

    camera_set_model(position, rotation);
    camera_scale_model(size, size, size);
    glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, renderer_camera->model_view_projection);
    glBindBuffer(0x8892, (GLuint)model_vertex_buffer(model));
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, 0x1406, 0, 4 * mesh->stride, (const void *)(intptr_t)0);
    glDrawArrays(4, 0, 3 * mesh->triangle_count);
    glDisableVertexAttribArray(0);
    glBindBuffer(0x8892, 0);
    /* The original's tail rebuilds the camera's model as the identity and
       takes model * view and model * view * projection again (0x1A724E640,
       0x1A724E6C0) from the matrices the camera holds. */
    camera_reset_model();
}
