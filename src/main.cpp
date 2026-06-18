#include "../core/boot/Boot.h"
#include "../core/Engine.h"

int main() {

    Pure3X::bootSystem();

    Pure3X::Engine engine;
    engine.run();

    return 0;
}
