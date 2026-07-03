package com.pure3x.engine;

import java.io.File;
import java.util.ArrayList;
import java.util.List;

public class StorageManager {

    private final List<File> storageList;

    public StorageManager() {
        storageList = new ArrayList<>();
    }

    public void scanStorage() {

        storageList.clear();

        File internal = new File("/storage/emulated/0");
        if (internal.exists()) {
            storageList.add(internal);
        }

        File sdcard = new File("/storage/sdcard1");
        if (sdcard.exists()) {
            storageList.add(sdcard);
        }
    }

    public List<File> getStorages() {
        return storageList;
    }

    public int getStorageCount() {
        return storageList.size();
    }

    public void clear() {
        storageList.clear();
    }

    public boolean hasStorage() {
        return !storageList.isEmpty();
    }
}
