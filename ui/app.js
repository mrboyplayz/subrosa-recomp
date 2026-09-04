const tabs = [...document.querySelectorAll(".tab")];
const panels = [...document.querySelectorAll(".panel")];
const menu = document.querySelector("#menu");
const hint = document.querySelector("#hint");
const statusMode = document.querySelector("#status-mode");
const cursor = document.querySelector("#cursor");
const slots = [...document.querySelectorAll(".slot")];

function setPage(page) {
  tabs.forEach((tab) => tab.classList.toggle("active", tab.dataset.page === page));
  panels.forEach((panel) => panel.classList.toggle("active", panel.dataset.panel === page));
  statusMode.textContent = page[0].toUpperCase() + page.slice(1);
  hint.textContent = page === "game" ? "Press Tab for Menu" : "Esc or Tab returns to game";
}

tabs.forEach((tab) => {
  tab.addEventListener("click", () => setPage(tab.dataset.page));
});

slots.forEach((slot) => {
  slot.addEventListener("click", () => {
    slots.forEach((item) => item.classList.remove("active"));
    slot.classList.add("active");
    hint.textContent = slot.dataset.item;
  });
});

document.addEventListener("keydown", (event) => {
  if (event.key === "Tab") {
    event.preventDefault();
    menu.hidden = !menu.hidden;
    hint.textContent = menu.hidden ? "Press Tab for Menu" : "Esc or Tab returns to game";
  }
  if (event.key === "Escape") {
    menu.hidden = true;
    hint.textContent = "Press Tab for Menu";
  }
  if (event.key === "1") setPage("game");
  if (event.key === "2") setPage("players");
  if (event.key === "3") setPage("admin");
  if (event.key === "4") setPage("options");
});

document.querySelector(".game-view").addEventListener("mousemove", (event) => {
  const rect = event.currentTarget.getBoundingClientRect();
  cursor.style.left = `${event.clientX - rect.left}px`;
  cursor.style.top = `${event.clientY - rect.top}px`;
});
