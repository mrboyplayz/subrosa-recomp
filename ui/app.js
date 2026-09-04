const root = document.querySelector(".viewport");
const world = document.querySelector(".world");
const menu = document.querySelector("#tab-menu");
const options = document.querySelector("#options-panel");
const map = document.querySelector("#map-screen");
const phone = document.querySelector("#phone");
const spectator = document.querySelector("#spectator");
const help = document.querySelector("#top-help");
const cursor = document.querySelector("#cursor");
const slots = [...document.querySelectorAll(".slot")];
const menuLines = [...document.querySelectorAll(".menu-line[data-menu]")];

function hideOverlays() {
  menu.hidden = true;
  options.hidden = true;
  map.hidden = true;
  phone.hidden = true;
  spectator.hidden = true;
}

function setHelp(text) {
  help.textContent = text;
}

function toggleMenu() {
  const show = menu.hidden;
  hideOverlays();
  menu.hidden = !show;
  setHelp("Press Tab for Menu");
}

function showOptions() {
  hideOverlays();
  options.hidden = false;
  setHelp("Options");
}

function showMap() {
  const show = map.hidden;
  hideOverlays();
  map.hidden = !show;
  setHelp(show ? "Press C to toggle map" : "Press Tab for Menu");
}

function showPhone() {
  const show = phone.hidden;
  hideOverlays();
  phone.hidden = !show;
  setHelp(show ? "Left-click to answer" : "Press Tab for Menu");
}

function showSpectator() {
  const show = spectator.hidden;
  hideOverlays();
  spectator.hidden = !show;
  setHelp(show ? "Press Space to switch player" : "Press Tab for Menu");
}

menuLines.forEach((line) => {
  line.addEventListener("click", () => {
    menuLines.forEach((item) => item.classList.remove("active"));
    line.classList.add("active");
    if (line.dataset.menu === "game") {
      hideOverlays();
      setHelp("Press Tab for Menu");
    }
    if (line.dataset.menu === "options") {
      showOptions();
    }
    if (line.dataset.menu === "players") {
      showSpectator();
    }
  });
});

slots.forEach((slot) => {
  slot.addEventListener("click", () => {
    const number = slot.textContent.trim();
    slots.forEach((item) => item.classList.remove("selected"));
    slot.classList.add("selected");
    setHelp(number === "1" ? "Left-click to dial" : `Slot ${number}`);
    if (number === "1") {
      showPhone();
    }
  });
});

document.addEventListener("keydown", (event) => {
  if (event.key === "Tab") {
    event.preventDefault();
    toggleMenu();
  }
  if (event.key === "Escape") {
    hideOverlays();
    setHelp("Press Tab for Menu");
  }
  if (event.key.toLowerCase() === "c") {
    showMap();
  }
  if (event.key.toLowerCase() === "p") {
    showPhone();
  }
  if (event.key === " ") {
    event.preventDefault();
    showSpectator();
  }
});

root.addEventListener("mousemove", (event) => {
  const rect = world.getBoundingClientRect();
  if (event.clientX < rect.left || event.clientX > rect.right || event.clientY < rect.top || event.clientY > rect.bottom) {
    return;
  }
  cursor.style.left = `${event.clientX - rect.left}px`;
  cursor.style.top = `${event.clientY - rect.top}px`;
});
