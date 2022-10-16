#include "FileMan.h"

File_Man::File_Man(){
    this->fileNames = {};
}


void File_Man::add_file(string f){
    this->fileNames.push_back(f);
}