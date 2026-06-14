#include "Config/ConfigManager.h"
#include "Core/Engine.h"
#include "Core/System/System.h"
#include "Core/Network/network_manager.h"

#include <iostream>

namespace Pure3X {

void Engine::run() {

    ConfigManager config;

    if (!config.LoadConfig()) {
        std::cout << "[CONFIG] Criando configuracao padrao...\n";
        config.SaveConfig();
    }

    int option;

    while (true) {

        std::cout << "\n=========================================\n";
        std::cout << "        🎮 Pure3XEngenie OS\n";
        std::cout << "            v0.1.2 Alpha\n";
        std::cout << "=========================================\n";
        std::cout << " 1 - Iniciar Engine\n";
        std::cout << " 2 - Status do Sistema\n";
        std::cout << " 3 - Configuracoes\n";
        std::cout << " 4 - Rede\n";
        std::cout << " 5 - Sair\n";
        std::cout << "=========================================\n";
        std::cout << "Escolha uma opcao: ";

        if (!(std::cin >> option)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        switch (option) {

        case 1:
            std::cout << "\n[OK] Iniciando Engine...\n";
            std::cout << "Pure3XEngenie ativa!\n";
            break;

        case 2:
            System::showStatus();
            break;

        case 3:
            std::cout << "\n========== CONFIGURACOES ==========\n";
            std::cout << "Engine : Pure3XEngenie\n";
            std::cout << "Versao : 0.1.2 Alpha\n";
            std::cout << "Idioma : pt_BR\n";
            std::cout << "===================================\n";
            break;

        case 4: {

            int network_option;
            bool back = false;

            while (!back) {

                std::cout << "\n=================================\n";
                std::cout << "         🌐 Menu de Rede\n";
                std::cout << "=================================\n";
                std::cout << " 1 - Testar Conexao\n";
                std::cout << " 2 - Exibir Endereco IP\n";
                std::cout << " 3 - Verificar Portas Abertas\n";
                std::cout << " 4 - Voltar\n";
                std::cout << "=================================\n";
                std::cout << "Escolha uma opcao: ";

                std::cin >> network_option;

                switch (network_option) {

                case 1:
                    Network::NetworkManager::checkConnection();
                    break;

                case 2:
                    Network::NetworkManager::getIPAddress();
                    break;

                case 3:
                    Network::NetworkManager::listOpenPorts();
                    break;

                case 4:
                    back = true;
                    break;

                default:
                    std::cout << "\n[ERRO] Opcao invalida!\n";
                    break;
                }

                if (!back) {
                    std::cout << "\nPressione Enter para continuar...";
                    std::cin.ignore(1000, '\n');
                    std::cin.get();
                }
            }

            break;
        }

        case 5:
            std::cout << "\n[SAINDO] Encerrando sistema...\n";
            return;

        default:
            std::cout << "\n[ERRO] Opcao invalida!\n";
            break;
        }
    }
}

} // namespace Pure3X
