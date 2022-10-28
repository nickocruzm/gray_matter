#include "FileManager/FileManager.hpp"

int main(){
    FileManager* f = new FileManager();
    std::string f_name = "test.txt";

    f->add_file("test.txt");

    f->read(f_name);
}