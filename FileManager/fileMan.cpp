#include "FileMan.hpp"

FileMan::FileMan(){
    this->fileNames;
}

void FileMan::add_file(std::string f){
    this->fileNames.push_back(f);
}

void FileMan::read(std::string& f){
    std::ifstream file;
    file.open(f);
    std::string line;
    if(f.is_open()){
        while(std::getline(f,line))
        {
            std::cout<< line << std::endl;
        }
        f.close();
    }

    else{
        cout<<"Failed to open file" << endl;
    }


};