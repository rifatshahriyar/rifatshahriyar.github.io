
document.addEventListener('DOMContentLoaded', () => {
  const nav = document.querySelector('#navigation');
  const toggle = document.querySelector('.nav_toggle');
  if (nav && toggle) {
    toggle.addEventListener('click', () => {
      const open = nav.classList.toggle('nav_open');
      toggle.setAttribute('aria-expanded', open ? 'true' : 'false');
    });
    nav.querySelectorAll('a').forEach(a => a.addEventListener('click', () => nav.classList.remove('nav_open')));
  }

  const search = document.querySelector('#publication-search');
  if (search) {
    const items = [...document.querySelectorAll('.publication')];
    search.addEventListener('input', () => {
      const q = search.value.trim().toLowerCase();
      items.forEach(item => { item.hidden = q && !item.textContent.toLowerCase().includes(q); });
    });
  }
});
