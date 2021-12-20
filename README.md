# Linux Kernel Module - Part 1

  - Explicação geral de toda estrutura do nosso KM.

  <img src="https://imgur.com/EOm0gAs.png">
    <b>Bom, temos aqui então todo nosso cabeçalho de includes de bibliotecas. Vamos fazer uma explicação sobre cada biblioteca dessa de uma forma mais completa,
    já que expliquei de forma resumida no projeto.</b>
<br>
<br>
    
<b><h2>📌 -> Linux/Kernel.h</b>:</h2> é o cabeçalho para construção de modulos, é o cabeçalho que faz parte do código-fonte do kernel do linux e é a library que importei para trabalhar com a construção de módulos.

<b><h2>📌 -> Linux/Module.h</b>:</h2> é o cabeçalho que trabalha com modulos do Kernel, é o cabeçalho que nos ajudará na construção do nosso módulo e também faz parte do código-fonte do kernel do linux.

<b><h2>📌 -> Linux/init.h</b>:</h2> é o cabeçalho que trabalha com a inicialização e término de dados como algum dos módulos finais.

  - Setando módulos
  
  <img src="https://imgur.com/HBCuki1.png">
  <b>Aqui setamos alguns módulos como módulos de descrição, autor, licença e até a versão do nosso projeto LKM.</b>

