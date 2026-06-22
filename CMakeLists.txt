cmake_minimum_required(VERSION 3.16)

project(Pure3XEngenie
    VERSION 0.1.8
    DESCRIPTION "Experimental PlayStation 3 Engine for Android"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Pure3XEngenie

    # Main
    src/main.cpp

    # Engine
    core/Engine.cpp

    # Boot
    core/boot/Boot.cpp

    # Config
    Config/ConfigManager.cpp
    core/config/ConfigFile.cpp

    # System
    core/system/System.cpp

    # Logger
    core/logger/Log.cpp

    # Network
    core/network/network_manager.cpp
    core/network/network_utils.cpp

    # Version
    core/version/version.cpp

    # Game Modules
    core/gamemodules/GameModule.cpp
    core/gamemodules/ModuleManager.cpp

    # Module Manager
    core/modules/Module.cpp
    core/modules/ModuleManager.cpp

    # Emulator Core
    core/emulator/Emulator.cpp
    core/emulator/CPU.cpp
    core/emulator/GPU.cpp
    core/emulator/SPU.cpp
    core/emulator/Memory.cpp

    # PPU Interpreter
    core/emulator/ppu/PPUInterpreter.cpp
    core/emulator/ppu/PPUState.cpp

    # SPU Interpreter
    core/emulator/spu/SPUInterpreter.cpp
    core/emulator/spu/SPUDecoder.cpp
    core/emulator/spu/SPUState.cpp

    # Syscalls
    core/syscalls/SyscallManager.cpp
    core/syscalls/SyscallTable.cpp

    # Audio Framework
    core/audio/AudioManager.cpp

    # Input Framework
    core/input/InputManager.cpp
    core/input/DualShock3.cpp
    core/input/InputState.cpp
    core/input/ButtonMap.cpp

    # Cache Framework
    core/cache/FileCache.cpp

    # GPU
    core/gpu/CommandProcessor.cpp
    core/gpu/RSXState.cpp
    core/gpu/CommandBuffer.cpp

    # RSX
    core/rsx/Renderer.cpp
    core/rsx/ShaderManager.cpp
    core/rsx/TextureManager.cpp
    core/rsx/VertexBuffer.cpp

    # Memory Bus
    core/bus/MemoryBus.cpp

    # Thread Manager
    core/threading/ThreadManager.cpp

    # Disc / Game Manager
    core/disc/Disc.cpp
    core/disc/GameManager.cpp

    # Memory Manager
    core/memory/MemoryManager.cpp
    core/memory/MemoryMap.cpp
    core/memory/VirtualMemory.cpp
    core/memory/MemoryAllocator.cpp
    core/memory/AddressTranslator.cpp

    # Loader
    core/loader/Loader.cpp
    core/loader/ExecutableLoader.cpp
    core/loader/LoaderContext.cpp
    core/loader/FirmwareManager.cpp
    core/loader/FirmwareInfo.cpp
    core/loader/ELF/ElfLoader.cpp
    core/loader/SELF/SelfLoader.cpp
    core/loader/SPRX/SprxLoader.cpp
    # Virtual File System (VFS)
    core/vfs/VFS.cpp
    core/vfs/FileSystem.cpp
    core/vfs/Directory.cpp

    # Kernel
    core/kernel/Kernel.cpp
    core/kernel/Process.cpp
    core/kernel/Thread.cpp
    core/kernel/ProcessManager.cpp
    core/kernel/ThreadScheduler.cpp

    # JIT
    core/jit/JITCompiler.cpp
    core/jit/BlockCache.cpp
    core/jit/NCE.cpp

    # Scheduler
    core/scheduler/FIFOQueue.cpp
    core/scheduler/InstructionScheduler.cpp
)

target_include_directories(Pure3XEngenie PRIVATE

    .

    # Config
    Config

    # Core
    core
    core/boot
    core/config
    core/gamemodules
    core/modules
    core/logger
    core/network
    core/platform
    core/system
    core/version

    # Emulator
    core/emulator
    core/emulator/ppu
    core/emulator/spu

    # Syscalls
    core/syscalls

    # Audio
    core/audio

    # Input
    core/input

    # Cache
    core/cache

    # GPU
    core/gpu

    # RSX
    core/rsx

    # Bus
    core/bus

    # Thread Manager
    core/threading

    # Disc
    core/disc

    # Memory
    core/memory

    # Loader
    core/loader
    core/loader/ELF
    core/loader/SELF
    core/loader/SPRX

    # Kernel
    core/kernel

    # JIT
    core/jit

    # Scheduler
    core/scheduler

    # VFS
    core/vfs
)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(Pure3XEngenie PRIVATE DEBUG_BUILD=1)
else()
    target_compile_definitions(Pure3XEngenie PRIVATE RELEASE_BUILD=1)
endif()
