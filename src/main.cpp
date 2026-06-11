#include "../Core/Engine.h"
#include "../Core/Boot/Boot.h"

int main() {

    bootSystem();

    Engine engine;
    engine.run();

    return 0;
}
