:root{
  --bg: #f4f4f4;
  --text: #222;
  --card: #ffffff;
  --border: #dddddd;
  --brand: #0d6efd;
  --focus: #8ec5ff;
  --base-font-size: 16px;
}

* { box-sizing: border-box; }
html, body { height: 100%; }
body{
  margin: 0;
  font-family: Arial, sans-serif;
  font-size: var(--base-font-size);
  line-height: 1.5;
  color: var(--text);
  background: var(--bg);
}

/* Alto contraste */
body.high-contrast{
  --bg: #000;
  --text: #fff;
  --card: #000;
  --border: #fff;
  --brand: #ffcc00;
}

/* Texto maior */
body.large-text{
  --base-font-size: 18px;
}

/* Layout */
.site-header, .site-footer{
  background: #333;
  color: #fff;
  text-align: center;
  padding: 1rem;
}
.content{
  padding: 2rem;
  text-align: center;
}

/* ======= Botão de acessibilidade ======= */
.accessibility{
  position: fixed;
  z-index: 1000;
}
/* Mude a classe para alterar posição */
.accessibility.bottom-right{ bottom: 20px; right: 20px; }
.accessibility.bottom-left{ bottom: 20px; left: 20px; }
.accessibility.top-right{ top: 20px; right: 20px; }
.accessibility.top-left{ top: 20px; left: 20px; }

.accessibility-button{
  background: var(--brand);
  color: #fff;
  border: 0;
  width: 60px;
  height: 60px;
  border-radius: 999px;
  display: inline-flex;
  align-items: center;
  justify-content: center;
  font-size: 24px;
  cursor: pointer;
  box-shadow: 0 8px 20px rgba(0,0,0,.15);
  transition: transform .15s ease;
}
.accessibility-button:focus{
  outline: 3px solid var(--focus);
  outline-offset: 2px;
}
.accessibility-button:hover{
  transform: translateY(-1px);
}

/* Painel */
.accessibility-options{
  position: absolute;
  bottom: 70px;
  right: 0;
  background: var(--card);
  border: 1px solid var(--border);
  border-radius: 12px;
  padding: .5rem;
  min-width: 220px;
  filter: drop-shadow(0 10px 20px rgba(0,0,0,.25));
}
.accessibility-options .option{
  width: 100%;
  display: block;
  text-align: left;
  padding: .6rem .8rem;
  background: transparent;
  border: 0;
  cursor: pointer;
  border-radius: 8px;
}
.accessibility-options .option:hover,
.accessibility-options .option:focus{
  background: rgba(0,0,0,.06);
  outline: none;
}

/* Apenas para leitores de tela */
.sr-only{
  position: absolute !important;
  width: 1px; height: 1px;
  margin: -1px; padding: 0; border: 0;
  overflow: hidden; clip: rect(0 0 0 0);
  white-space: nowrap;
}
:root{
  --bg: #f4f4f4;
  --text: #222;
  --card: #ffffff;
  --border: #dddddd;
  --brand: #0d6efd;
  --focus: #8ec5ff;
  --base-font-size: 16px;
}

* { box-sizing: border-box; }
html, body { height: 100%; }
body{
  margin: 0;
  font-family: Arial, sans-serif;
  font-size: var(--base-font-size);
  line-height: 1.5;
  color: var(--text);
  background: var(--bg);
}

/* Alto contraste */
body.high-contrast{
  --bg: #000;
  --text: #fff;
  --card: #000;
  --border: #fff;
  --brand: #ffcc00;
}

/* Texto maior */
body.large-text{
  --base-font-size: 18px;
}

/* Layout */
.site-header, .site-footer{
  background: #333;
  color: #fff;
  text-align: center;
  padding: 1rem;
}
.content{
  padding: 2rem;
  text-align: center;
}

/* ======= Botão de acessibilidade ======= */
.accessibility{
  position: fixed;
  z-index: 1000;
}
/* Mude a classe para alterar posição */
.accessibility.bottom-right{ bottom: 20px; right: 20px; }
.accessibility.bottom-left{ bottom: 20px; left: 20px; }
.accessibility.top-right{ top: 20px; right: 20px; }
.accessibility.top-left{ top: 20px; left: 20px; }

.accessibility-button{
  background: var(--brand);
  color: #fff;
  border: 0;
  width: 60px;
  height: 60px;
  border-radius: 999px;
  display: inline-flex;
  align-items: center;
  justify-content: center;
  font-size: 24px;
  cursor: pointer;
  box-shadow: 0 8px 20px rgba(0,0,0,.15);
  transition: transform .15s ease;
}
.accessibility-button:focus{
  outline: 3px solid var(--focus);
  outline-offset: 2px;
}
.accessibility-button:hover{
  transform: translateY(-1px);
}

/* Painel */
.accessibility-options{
  position: absolute;
  bottom: 70px;
  right: 0;
  background: var(--card);
  border: 1px solid var(--border);
  border-radius: 12px;
  padding: .5rem;
  min-width: 220px;
  filter: drop-shadow(0 10px 20px rgba(0,0,0,.25));
}
.accessibility-options .option{
  width: 100%;
  display: block;
  text-align: left;
  padding: .6rem .8rem;
  background: transparent;
  border: 0;
  cursor: pointer;
  border-radius: 8px;
}
.accessibility-options .option:hover,
.accessibility-options .option:focus{
  background: rgba(0,0,0,.06);
  outline: none;
}

/* Apenas para leitores de tela */
.sr-only{
  position: absolute !important;
  width: 1px; height: 1px;
  margin: -1px; padding: 0; border: 0;
  overflow: hidden; clip: rect(0 0 0 0);
  white-space: nowrap;
}
