#include "InputMenu.h"

#include <iostream>

namespace Pure3X
{

void ShowInputMenu()
{
    int option;

    while (true)
    {
        std::cout << "\n========== INPUT MANAGER ==========\n";
        std::cout << "1 - PlayStation 3 (DualShock 3)\n";
        std::cout << "2 - PlayStation 4 (DualShock 4)\n";
        std::cout << "3 - PlayStation 5 (DualSense)\n";
        std::cout << "4 - Xbox 360\n";
        std::cout << "5 - Xbox One\n";
        std::cout << "6 - Xbox Series X|S\n";
        std::cout << "7 - Controle Generico\n";
        std::cout << "8 - Teclado e Mouse\n";
        std::cout << "9 - Voltar\n\n";

        std::cout << "Escolha uma opcao: ";
        std::cin >> option;

        switch (option)
        {
            case 1:
                std::cout << "\nDualShock 3: Mapeamento pronto.\n";
                break;

            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                std::cout << "\nEm desenvolvimento...\n";
                break;

            case 9:
                return;

            default:
                std::cout << "\nOpcao invalida!\n";
                break;
        }

        std::cout << "\nPressione Enter para continuar...";
        std::cin.ignore(1000, '\n');
        std::cin.get();
    }
}

} // namespace Pure3X
