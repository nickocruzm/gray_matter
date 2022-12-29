#include "FileManager.hpp"

FileManager::FileManager(){
    this->files = {};
}

void FileManager::add_file(string file){
    this->files.push_back(file);
}

vector<string> FileManager::read(){
    ifstream file;
    string file_name;
    vector<string> content;

    if (this->files.size() == 1){
        file_name = this->files[0];
    }
    else{
        cout<<"too many files to read"<<endl;
        return content;
    }

    file.open(file_name);
    string line;
    if(file.is_open()){

        while(std::getline(file,line))
        {
            content.push_back(line);
        }
        file.close();
    }

    else{
        cout<<"Failed to open file" << endl;
    }
    file.close();

    return content;

};

