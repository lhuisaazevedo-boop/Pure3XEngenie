# 🎮 Pure3XEngenie

Pure3XEngenie is a custom C++ game engine designed with a console-inspired architecture, similar to classic systems like PS3-style boot flow and modular runtime execution.

The project focuses on building a lightweight, educational, and expandable engine capable of simulating a real console environment inside the terminal.

---

# 🧠 Project Vision

The main idea behind Pure3XEngenie is to simulate how a real game console works internally:

- Boot sequence before runtime
- Core system initialization
- Modular game loading system
- Controlled execution loop
- System-like interface inside terminal

This project is not just a game engine — it is an experimental console framework built for learning low-level architecture and system design.

---

# ⚙️ Architecture Overview

The engine is structured in a modular way to allow scalability and clean separation of responsibilities.

### Core Layers:

- Boot Layer → system initialization and splash screen
- Engine Core → main runtime system
- Game Modules → future dynamic game loading
- Config System → runtime configuration handling
- Logging System → debugging and execution logs

---

# 🧱 Folder Structure

---

# 🚀 Boot System

The Boot System is the first layer executed when running the engine.

It simulates a console startup sequence:

- System initialization
- Core loading
- Module preparation
- Transition to main menu

Example output:

---

# ⚙️ Build System

The project uses CMake as its build system to ensure portability and scalability.


📈 Detalhes Estendidos da Engine
A Pure3XEngenie está em constante evolução como um projeto de engine baseado em aprendizado.
A arquitetura foi projetada para simular o comportamento de um console real dentro do terminal.
🧩 Conceito do Sistema de Módulos
Cada sistema dentro da engine é independente e substituível.
O Core não depende dos GameModules
Os GameModules se comunicam através de APIs controladas
O sistema de Boot inicializa tudo de forma segura
O sistema de Config define o comportamento em tempo de execução
🔄 Comportamento em Tempo de Execução
Durante a execução, a engine segue um ciclo controlado:
Fase de inicialização
Execução do boot do sistema
Ativação do Core
Verificação dos módulos
Loop principal da engine
🖥️ Simulação em Terminal
A engine foi criada para funcionar totalmente no terminal.
Isso permite:
Execução leve
Compatibilidade entre sistemas
Facilidade de depuração
Iteração rápida de testes
⚡ Filosofia de Performance
A engine evita excesso de processamento:
Sem bibliotecas pesadas desnecessárias
Dependências mínimas
Foco em C++ puro
Lógica direta de sistema
🧠 Objetivo Educacional
Este projeto também serve como ferramenta de aprendizado para:
Arquitetura de engines
Design de sistemas modulares
Estruturação em C++
Simulação de sistemas de boot
🧪 Recursos Experimentais (Planejados)
Sistemas futuros incluem:
Carregador dinâmico de plugins
Simulação de camada de memória virtual
Renderizador de animações no terminal
Execução de módulos via scripts
Sistema baseado em eventos
📦 Estabilidade de Build
O sistema atual usa CMake e suporta:
Compilação incremental
Ligação entre módulos
Modos debug e release
Saída via terminal
🔐 Segurança e Estrutura
O projeto evita operações perigosas:
Sem sobrescrita direta do sistema
Sem exclusão destrutiva de arquivos
Uso controlado de memória
Fluxo de execução estruturado
🌍 Escopo do Projeto
A Pure3XEngenie não tem como objetivo substituir engines reais.
Ela foca em:
Educação
Simulação
Experimentação
Estudo de arquitetura de sistemas
🚀 Visão de Futuro
O objetivo de longo prazo é evoluir para:
Uma simulação completa de console
Um sistema modular de execução de jogos
Uma plataforma de aprendizado de engines
Um ambiente de testes de arquitetura
🎯 Metas de Versão
Versão 0.1 → Estrutura básica da engine
Versão 0.5 → Sistema de módulos interativos
Versão 1.0 → Console simulado completo
👨‍💻 Estilo de Desenvolvimento
O projeto segue:
Princípios de código limpo
Separação modular
Desenvolvimento incremental
Foco em terminal
📜 Continuação
Novos sistemas serão adicionados conforme a engine evolui.
Cada atualização melhora a estrutura, estabilidade e fidelidade da simulação de console.
