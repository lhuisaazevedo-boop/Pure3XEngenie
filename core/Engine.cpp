#include "Engine.h"
#include "system/System.h"

#include <cstdlib>
#include <iostream>
#include <string>

namespace Pure3X {

void Engine::run() {
    int option;

    while (true) {

        std::cout << "\n=================================\n";
        std::cout << "      Pure3XEngenie OS\n";
        std::cout << "=================================\n";
        std::cout << " 1 - Iniciar Engine\n";
        std::cout << " 2 - Status do Sistema\n";
        std::cout << " 3 - Configuracoes\n";
        std::cout << " 4 - Rede\n";
        std::cout << " 5 - Sair\n";
        std::cout << "=================================\n";
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
            std::cout << "Engine     : Pure3XEngenie\n";
            std::cout << "Versao     : 0.1.4 Alpha\n";
            std::cout << "Idioma     : pt_BR\n";
            std::cout << "Debug      : ON\n";
            std::cout << "Log Level  : INFO\n";
            std::cout << "Rede       : Ativa\n";
            std::cout << "Boot       : OK\n";
            std::cout << "Config.ini : Carregado\n";
            std::cout << "===================================\n";

            std::cout << "\nPressione Enter para continuar...";
            std::cin.ignore(1000, '\n');
            std::cin.get();
            break;

        case 4: {

            int network_option;
            bool back = false;

            while (!back) {

                std::cout << "\n=================================\n";
                std::cout << "         MENU DE REDE\n";
                std::cout << "=================================\n";
                std::cout << " 1 - Testar Conexao (Ping)\n";
                std::cout << " 2 - Exibir Endereco IP\n";
                std::cout << " 3 - Verificar Portas Abertas\n";
                std::cout << " 4 - Voltar\n";
                std::cout << "=================================\n";
                std::cout << "Escolha uma opcao: ";

                std::cin >> network_option;

                switch (network_option) {

                case 1:
                    std::cout << "\n[REDE] Testando conexao...\n";
                    system("ping -c 4 8.8.8.8");
                    break;

                case 2:
                    std::cout << "\n[REDE] Endereco IP:\n";
                    system("ip addr show | grep 'inet '");
                    break;

                case 3:
                    std::cout << "\n[REDE] Portas abertas:\n";
                    system("ss -tuln 2>/dev/null || netstat -tuln");
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
