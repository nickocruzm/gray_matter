#include "FileManager/FileManager.hpp"

int main(){
    vector<string> vec;
    FileManager f = FileManager();
    std::string f_name = "test.txt";

    f.add_file("test.txt");

    vec = f.read();

}
