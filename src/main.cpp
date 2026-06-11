#include <iostream>
#include <thread>
#include <chrono>

void showMenu() {
    std::cout << "\n=================================\n";
    std::cout << "      🎮 Pure3XEngenie OS        \n";
    std::cout << "=================================\n";
    std::cout << " 1 - Iniciar Engine\n";
    std::cout << " 2 - Status do Sistema\n";
    std::cout << " 3 - Configuracoes\n";
    std::cout << " 4 - Sair\n";
    std::cout << "=================================\n";
    std::cout << "Escolha uma opcao: ";
}

void bootSystem() {
    std::cout << "\n=================================\n";
    std::cout << "   Pure3XEngenie - Boot System   \n";
    std::cout << "=================================\n\n";

    const int width = 30;

    for (int i = 0; i <= width; i++) {
        int percent = (i * 100) / width;

        std::cout << "\rCarregando sistema... [";

        for (int j = 0; j < width; j++) {
            if (j < i)
                std::cout << "█";
            else
                std::cout << " ";
        }

        std::cout << "] " << percent << "%";
        std::cout.flush();

        std::this_thread::sleep_for(std::chrono::milliseconds(120));
    }

    std::cout << "\n\nInicializando Kernel...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    std::cout << "Carregando Core System...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    std::cout << "Verificando memoria...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    std::cout << "Inicializando Modulos...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    std::cout << "\n[OK] Sistema iniciado com sucesso!\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(800));
}

int main() {
    bootSystem();

    int option;

    while (true) {
        showMenu();

        std::cin >> option;

        if (option == 1) {
            std::cout << "\n[OK] Iniciando Engine...\n";
            std::cout << "Carregando sistema base...\n";
            std::cout << "Pure3XEngenie ativo!\n";
        }
        else if (option == 2) {
            std::cout << "\n[SISTEMA] Tudo funcionando normalmente.\n";
            std::cout << "CPU: OK\nRAM: OK\nCORE: OK\n";
        }
        else if (option == 3) {
            std::cout << "\n[CONFIG] Ainda em desenvolvimento...\n";
        }
        else if (option == 4) {
            std::cout << "\n[SAINDO] Encerrando sistema...\n";
            break;
        }
        else {
            std::cout << "\n[ERRO] Opcao invalida!\n";
        }
    }

    return 0;
}
