#include <iostream>

#include "ConfigMenu.h"
#include "InputMenu.h"

namespace Pure3X
{

void ShowConfigMenu()
{
    int option;

    while (true)
    {
        std::cout << "\n===== CONFIGURACOES =====\n";
        std::cout << "1 - Video\n";
        std::cout << "2 - Audio\n";
        std::cout << "3 - Controles\n";
        std::cout << "4 - Voltar\n\n";

        std::cout << "Escolha uma opcao: ";
        std::cin >> option;

        switch (option)
        {
            case 1:
                std::cout << "\nMenu de Video em desenvolvimento...\n";
                break;

            case 2:
                std::cout << "\nMenu de Audio em desenvolvimento...\n";
                break;

            case 3:
                ShowInputMenu();
                break;

            case 4:
                return;

            default:
                std::cout << "\nOpcao invalida!\n";
                break;
        }

        if (option != 3)
        {
            std::cout << "\nPressione Enter para continuar...";
            std::cin.ignore(1000, '\n');
            std::cin.get();
        }
    }
}

} // namespace Pure3X
