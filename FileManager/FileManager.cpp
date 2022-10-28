#include "FileManager.hpp"

FileManager::FileManager(){
    this->fileNames = {};
}

void FileManager::add_file(std::string file){
    this->fileNames.push_back(file);
}
void FileManager::read(std::string& f){
    std::ifstream file;
    file.open(f);
    std::string line;

    if(file.is_open()){
        while(std::getline(file,line))
        {
            std::cout<< line << std::endl;
        }
        file.close();
    }

    else{
        std::cout<<"Failed to open file" << std::endl;
    }
    file.close();

};

