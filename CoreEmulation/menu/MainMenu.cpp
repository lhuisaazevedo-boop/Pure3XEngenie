#include "MainMenu.h"

#include <iostream>

namespace Pure3X
{

void MainMenu::Show()
{
    int opcao = -1;

    while (opcao != 0)
    {
        std::cout << "\n=====================================\n";
        std::cout << "      PURE3XENGENIE - MENU\n";
        std::cout << "=====================================\n\n";

        std::cout << "1 - Iniciar Engine\n";
        std::cout << "2 - Status do Sistema\n";
        std::cout << "3 - Configuracoes\n";
        std::cout << "0 - Sair\n\n";

        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao)
        {
            case 1:
                std::cout << "\nIniciando Engine...\n";
                break;

            case 2:
                std::cout << "\nAbrindo Status do Sistema...\n";
                break;

            case 3:
                std::cout << "\nAbrindo Configuracoes...\n";
                break;

            case 0:
                std::cout << "\nEncerrando Pure3XEngenie...\n";
                break;

            default:
                std::cout << "\nOpcao invalida!\n";
                break;
        }
    }
}

}
