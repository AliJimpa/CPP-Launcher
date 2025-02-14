
#include "Logic.h"


#include <filesystem>


void Logic::CreateDirectory(std::string filename)
{
    std::filesystem::path folderPath = std::filesystem::current_path() / filename;

    if (std::filesystem::create_directory(folderPath))
    {
        std::cout << "Folder created successfully: " << folderPath << std::endl;
    }
    else
    {
        std::cout << "Failed to create folder (it may already exist)." << std::endl;
    }
}