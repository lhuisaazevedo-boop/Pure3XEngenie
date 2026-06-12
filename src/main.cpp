#include "../Core/Boot/Boot.h"
#include "../Core/Engine.h"

int main() {

    Pure3X::bootSystem();

    Pure3X::Engine engine;
    engine.run();

    return 0;
}
