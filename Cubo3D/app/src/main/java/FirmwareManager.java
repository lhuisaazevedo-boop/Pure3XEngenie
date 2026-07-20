package com.pure3x.engine;

public class FirmwareManager {

    private boolean firmwareInstalled = false;
    private String firmwareVersion = "Nenhum";

    public FirmwareManager() {
    }

    public boolean isInstalled() {
        return firmwareInstalled;
    }

    public void installFirmware(String version) {
        firmwareInstalled = true;
        firmwareVersion = version;
    }

    public void removeFirmware() {
        firmwareInstalled = false;
        firmwareVersion = "Nenhum";
    }

    public String getVersion() {
        return firmwareVersion;
    }

    public String getStatus() {
        if (firmwareInstalled) {
            return "Firmware instalado: " + firmwareVersion;
        } else {
            return "Firmware não instalado";
        }
    }
}
