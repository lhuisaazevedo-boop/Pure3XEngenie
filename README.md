# 🎮 Pure3XEngenie

Pure3XEngenie é uma engine de jogos em C++ inspirada em sistemas de console, com arquitetura modular e sistema de boot estilo PS3.

O projeto simula um ambiente de console dentro do terminal, com foco em aprendizado, experimentação e design de engines.

---

## 🧠 Visão do Projeto

A ideia principal da Pure3XEngenie é simular o funcionamento interno de um console real:

- Sistema de boot antes da execução
- Inicialização do core
- Carregamento de módulos de jogo
- Loop principal da engine
- Interface estilo console no terminal

---

## ⚙️ Estrutura da Engine

A engine é dividida em módulos independentes:

- Boot → inicialização do sistema
- Core → núcleo da engine
- GameModules → módulos de jogos futuros
- Config → configurações do sistema
- Logs → registro de execução

---

## 🧱 Estrutura de Pastas


## ---

## 🚀 Boot System

O Boot System simula o início de um console:

- Inicialização do sistema
- Carregamento do Core
- Preparação dos módulos
- Exibição do menu principal

---

## 🧠 Core System

O Core é responsável por:

- Controle da execução da engine
- Gerenciamento de fluxo
- Integração com módulos
- Ciclo principal do sistema

---

## 🎮 GameModules (Futuro)

Permite carregar jogos/modos dentro da engine.

Funções planejadas:

- Carregamento dinâmico
- Execução isolada
- Comunicação com Core
- Sistema plug-and-play

---

## 📊 Fluxo do Sistema

1. main.cpp inicia o programa  
2. Boot System executa  
3. Core é carregado  
4. Configuração aplicada  
5. Menu exibido  
6. Loop principal da engine  
7. Módulos futuros executados  

---

## 🧪 Ambiente de Desenvolvimento

- C++
- CMake
- Termux (Android)
- Git
- GitHub

---

## 📦 Funcionalidades

- ✔ Boot system
- ✔ Core engine
- ✔ Estrutura modular
- ✔ Build com CMake
- ✔ Versionamento Git
- ✔ Output estilo console

---

## 🧭 Roadmap

- [ ] Menu interativo
- [ ] Loop real da engine
- [ ] GameModules funcionando
- [ ] Sistema de configuração (.cfg/.json)
- [ ] Sistema de logs avançado
- [ ] Animações no terminal
- [ ] Versão 0.1
- [ ] Versão 1.0

---

## 👤 Autor

Lhuis  
Pure3XEngenie Project

---

## 📜 Licença

MIT License
