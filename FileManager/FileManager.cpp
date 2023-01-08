#include "FileManager.hpp"

FileManager::FileManager(){
    this->files = {};
}

FileManager::FileManager(string fileName){
    this->add_file(fileName);
}


void FileManager::add_file(string file){
    this->files.push_back(file);
}



