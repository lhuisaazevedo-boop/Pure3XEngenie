#include "Engine.h"
#include "System/System.h"

#include <iostream>

void Engine::run() {
    int option;

    while (true) {

        std::cout << "\n=================================\n";
        std::cout << "      🎮 Pure3XEngenie OS        \n";
        std::cout << "=================================\n";
        std::cout << " 1 - Iniciar Engine\n";
        std::cout << " 2 - Status do Sistema\n";
        std::cout << " 3 - Configuracoes\n";
        std::cout << " 4 - Sair\n";
        std::cout << "=================================\n";
        std::cout << "Escolha uma opcao: ";

        std::cin >> option;

        switch(option) {

            case 1:
                std::cout << "\n[OK] Iniciando Engine...\n";
                std::cout << "Pure3XEngenie ativa!\n";
                break;

            case 2:
                System::showStatus();
                break;

            case 3:
                std::cout << "\n[CONFIG] Ainda em desenvolvimento.\n";
                break;

            case 4:
                std::cout << "\n[SAINDO] Encerrando sistema...\n";
                return;

            default:
                std::cout << "\n[ERRO] Opcao invalida!\n";
                break;
        }
    }
}
