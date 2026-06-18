<p align="center">
  <img src="Docs/images/Pure3XEngenie.png" alt="Pure3XEngenie Banner" width="100%">
</p>

<h1 align="center">Pure3XEngenie</h1>

<p align="center">
Experimental PlayStation 3 Engine for Android
</p>

---
## Pure3XEngenie v0.1.4 Update ##

«⚠️ O Pure3XEngenie encontra-se em desenvolvimento na fase Alpha.»

Novos recursos, melhorias, correções e otimizações são adicionados a cada versão.

---

## 📌 Status Atual ##

O Pure3XEngenie é uma engine experimental desenvolvida em C++, focada em pesquisa, arquitetura modular e desenvolvimento de baixo nível para emulação de PlayStation 3 no Android.

A versão v0.1.4 Update representa uma grande evolução da estrutura interna do projeto, preparando a base para os próximos módulos do Core PS3.

---

## ⚠️ Suporte ao Android ##

O Pure3XEngenie iniciou oficialmente a preparação para oferecer suporte nativo ao Android.

O ambiente de desenvolvimento já possui uma base funcional utilizando Termux, CMake, Android NDK e arquitetura ARM64.

Status: 🚧 Experimental

---

## ✅ Funcionalidades Implementadas ##

## 🟢 Boot System ##

- Inicialização da Engine
- Logo ASCII
- Barra de carregamento
- Sequência de Boot
- Sistema de Logs
- Tela Pure3XEngenie Ready

---

## 🧠 Core ##

- Arquitetura Modular
- Organização completa da Engine
- Controle da execução
- Base preparada para expansão

---

## 📦 Version Core ##

- Centralização das informações da Engine
- Nome da Engine
- Versão
- Build
- Desenvolvedor
- Plataforma
- Idioma

## Estrutura ##
```
core/
└── version/
    ├── version.h
    ├── version.cpp
    └── changelog.h
```
Agora todas as informações da Engine ficam centralizadas em um único local.

---

## 🖥️ System Manager ##

- Status do Sistema
- Informações da Engine
- Verificação dos componentes
- Leitura automática do Version Core

---

## ⚙️ Config Manager ##

- Configuração modular
- Boot
- Rede
- Logs
- Preparação para múltiplos idiomas

---

## 🌐 Network System ##

- Teste de conexão
- Endereço IP
- Informações da rede
- Portas
- Base preparada para futuras melhorias

---

## 📄 Logger ##

- Logger reescrito
- Logs em arquivo
- Níveis de Log
```
[INFO]
[OK]
[WARN]
[ERROR]
```
- Detecção automática de Threads
- Preparação para Debug

---

## 🎮 Interface Terminal ##

- Menu Principal
- Tela de Status
- Sistema de Configuração
- Menu de Rede
- Interface organizada

---

## 📁 Estrutura do Projeto ##
```
Pure3XEngenie/
├── Config/
├── Docs/
├── build/
├── core/
│   ├── boot/
│   ├── config/
│   ├── gamemodules/
│   ├── logger/
│   ├── network/
│   ├── platform/
│   ├── system/
│   └── version/
├── include/
├── src/
├── CMakeLists.txt
├── README.md
└── LICENSE
```
---

## ⭐ Características ##

- Arquitetura Modular
- C++17
- CMake
- Boot System
- Version Core
- Config Manager
- Logger
- Network Manager
- Interface Terminal
- Estrutura preparada para expansão

---

## ⚙️ Tecnologias ##

- C++
- CMake
- Git
- GitHub
- Termux
- Android NDK (Experimental)

---

## 📚 Documentação #$

Toda a documentação oficial encontra-se na pasta Docs.

- OfficialDocumentation.md
- DevelopmentRoadmap.md
- DevelopmentNotes.md

---

## 🗺️ Roadmap ##

## ✅ v0.1.4 Update ##

- Reorganização completa do Core
- Novo Logger
- Version Core
- Melhorias no Boot
- Menu de Rede
- Status do Sistema
- Correções gerais
- Preparação para GameModules

---

## 🚧 v0.1.5 Alpha ##

- Expansão dos GameModules
- Loader Base
- Language Manager
- Configurações avançadas
- Melhor organização do projeto

---

## 🚧 v0.1.6 Alpha ##

- PS3 Module
- ELF Loader
- SELF Loader
- SPRX Loader
- Melhorias no sistema de arquivos

---

## 🚧 v0.1.7 Alpha ##

- Memory Manager
- Virtual File System
- Kernel Base
- Thread Manager

---

## 🚧 v0.1.8 Alpha ##

- RSX Graphics Base
- SPU Framework
- Melhorias de desempenho
- Sistema de Plugins

---

## 🚀 v0.1.9 Alpha ##

- Primeira estrutura funcional do Core PS3
- Melhor integração dos módulos
- Base para carregamento de jogos
- Preparação para futuras versões Beta

---

## 🔮 Futuro ##

- Graphics Engine
- Audio Engine
- Native Code Execution (NCE)
- Vulkan Renderer
- Time Manager

---

## 👨‍💻 Autor ##

Lhuis (LhuisDev)

Projeto desenvolvido para pesquisa, aprendizado e evolução de uma engine experimental de PlayStation 3 para Android.

---

## 📜 Licença ##

Distribuído sob a MIT License.

Você pode estudar, modificar e contribuir com o projeto, respeitando os termos da licença e mantendo os créditos do autor original.

O Pure3XEngenie continuará recebendo atualizações frequentes. Todas as versões oficiais serão publicadas neste repositório.
