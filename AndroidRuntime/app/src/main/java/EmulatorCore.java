package com.pure3x.engine;

public class EmulatorCore {

    private final RuntimeManager runtimeManager;
    private final MemoryManager memoryManager;
    private final RSXManager rsxManager;
    private final PPUManager ppuManager;
    private final SPUManager spuManager;
    private final AudioManager audioManager;
    private final InputManager inputManager;
    private final BootManager bootManager;

    private boolean initialized;

    public EmulatorCore() {

        runtimeManager = new RuntimeManager();
        memoryManager = new MemoryManager();
        rsxManager = new RSXManager();
        ppuManager = new PPUManager();
        spuManager = new SPUManager();
        audioManager = new AudioManager();
        inputManager = new InputManager();
        bootManager = new BootManager();

        initialized = false;
    }

    public void initialize() {

        System.out.println("==================================");
        System.out.println("Pure3XEngine v0.2.3 Alpha");
        System.out.println("Inicializando Emulator Core...");
        System.out.println("==================================");

        runtimeManager.startRuntime();
        memoryManager.initialize();
        rsxManager.initialize();
        ppuManager.initialize();
        spuManager.initialize();
        audioManager.initialize();
        inputManager.initialize();
        bootManager.initialize();

        initialized = true;

        System.out.println("==================================");
        System.out.println("Emulator Core iniciado.");
        System.out.println("==================================");
    }

    public boolean isInitialized() {
        return initialized;
    }

    public void shutdown() {

        bootManager.shutdown();
        inputManager.shutdown();
        audioManager.shutdown();
        spuManager.shutdown();
        ppuManager.shutdown();
        rsxManager.shutdown();
        memoryManager.shutdown();
        runtimeManager.stopRuntime();

        initialized = false;

        System.out.println("Emulator Core desligado.");
    }

    public String getStatus() {

        if (initialized) {
            return "Emulator Core ativo";
        }

        return "Emulator Core parado";
    }

    public RuntimeManager getRuntimeManager() {
        return runtimeManager;
    }

    public MemoryManager getMemoryManager() {
        return memoryManager;
    }

    public RSXManager getRSXManager() {
        return rsxManager;
    }

    public PPUManager getPPUManager() {
        return ppuManager;
    }

    public SPUManager getSPUManager() {
        return spuManager;
    }

    public AudioManager getAudioManager() {
        return audioManager;
    }

    public InputManager getInputManager() {
        return inputManager;
    }

    public BootManager getBootManager() {
        return bootManager;
    }
}
