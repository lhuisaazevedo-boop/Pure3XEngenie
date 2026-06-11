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

### Build Instructions:

🧠 Core System
The Core system is responsible for:
Managing runtime execution
Controlling system flow
Handling module loading
Managing engine lifecycle
This is the heart of the engine.
🎮 GameModules (Future System)
GameModules will allow dynamic loading of game-like components inside the engine.
Planned features:
Load/unload modules at runtime
Isolated module execution
Communication with Core system
Plug-and-play architecture
📊 System Flow
The execution flow of the engine follows this pattern:
Program start (main.cpp)
Boot system initialization
Core system loading
Configuration setup
Menu display
Engine execution loop
Module interaction (future)
🧪 Development Environment
This project is developed using:
C++
CMake
Termux (Android Linux environment)
Git version control
GitHub repository hosting
📜 Features Implemented
✔ Boot system
✔ Core architecture
✔ Modular folder structure
✔ CMake build system
✔ Git version control
✔ Console-style output system
🧭 Roadmap
Future development goals:
[ ] Interactive menu system (keyboard input)
[ ] Real engine loop system
[ ] GameModules dynamic loader
[ ] Config file system (.cfg / .json)
[ ] Logging system expansion
[ ] UI terminal animations
[ ] Version 0.1 release
[ ] Version 1.0 stable engine release
🔥 Design Philosophy
Pure3XEngenie follows three principles:
1. Simplicity
Keep the engine lightweight and understandable.
2. Modularity
Every system is independent and replaceable.
3. Expandability
The architecture is designed to grow over time.
👤 Author
Lhuis
Pure3XEngenie Project
📜 License
This project is licensed under the MIT License.
You are free to use, modify, and distribute with attribution.
