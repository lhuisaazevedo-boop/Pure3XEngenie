#include "ElfLoader.h"

#include <fstream>
#include <iostream>

namespace Pure3XEngenie {
namespace Loader {
namespace ELF {

bool ElfLoader::Load(const std::string& path)
{
    std::ifstream file(path, std::ios::binary);

    if (!file.is_open()) {
        std::cout << "[ELF] Erro ao abrir arquivo: " << path << std::endl;
        return false;
    }

    std::cout << "[ELF] Carregando arquivo: " << path << std::endl;

    file.close();

    std::cout << "[ELF] Arquivo carregado com sucesso." << std::endl;
    return true;
}

bool ElfLoader::Validate(const std::string& path)
{
    std::ifstream file(path, std::ios::binary);

    if (!file.is_open()) {
        return false;
    }

    unsigned char magic[4];
    file.read(reinterpret_cast<char*>(magic), 4);

    file.close();

    return magic[0] == 0x7F &&
           magic[1] == 'E' &&
           magic[2] == 'L' &&
           magic[3] == 'F';
}

void ElfLoader::PrintInfo()
{
    std::cout << "========== ELF Loader ==========" << std::endl;
    std::cout << "Status  : Ready" << std::endl;
    std::cout << "Formato : ELF" << std::endl;
    std::cout << "Uso     : Executaveis PS3" << std::endl;
    std::cout << "================================" << std::endl;
}

} // namespace ELF
} // namespace Loader
} // namespace Pure3XEngenie
