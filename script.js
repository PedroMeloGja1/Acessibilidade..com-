(function(){
  const container = document.getElementById('accessibility');
  const btn = document.getElementById('accessBtn');
  const panel = document.getElementById('accessPanel');
  const body = document.body;

  let hideTimer = null;

  const showPanel = () => {
    clearTimeout(hideTimer);
    panel.hidden = false;
    btn.setAttribute('aria-expanded', 'true');
  };

  const hidePanel = () => {
    hideTimer = setTimeout(() => {
      panel.hidden = true;
      btn.setAttribute('aria-expanded', 'false');
    }, 120);
  };

  const togglePanel = () => {
    if(panel.hidden){
      showPanel();
    }else{
      panel.hidden = true;
      btn.setAttribute('aria-expanded', 'false');
    }
  };

  // Hover (mouse)
  container.addEventListener('mouseenter', showPanel);
  container.addEventListener('mouseleave', hidePanel);

  // Foco (teclado)
  container.addEventListener('focusin', showPanel);
  container.addEventListener('focusout', hidePanel);

  // Clique (mobile + desktop)
  btn.addEventListener('click', (e) => {
    e.preventDefault();
    togglePanel();
  });

  // Ações de acessibilidade
  container.addEventListener('click', (e) => {
    const el = e.target.closest('.option');
    if(!el) return;
    const action = el.getAttribute('data-action');
    switch(action){
      case 'toggle-contrast':
        body.classList.toggle('high-contrast');
        break;
      case 'increase-font':
        body.classList.add('large-text');
        break;
      case 'decrease-font':
        body.classList.remove('large-text');
        break;
      case 'reset':
        body.classList.remove('large-text', 'high-contrast');
        break;
    }
  });
})();
