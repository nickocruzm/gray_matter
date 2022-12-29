#include "FileManager/FileManager.hpp"
#include "Brain/Brain.hpp"


int main(){
    vector<string> vec;
    Brain brain = Brain();
    FileManager f = FileManager();
    std::string f_name = "test.txt";

    f.add_file("test.txt");

    vec = f.read();
    brain.set_data(vec);

    cout<< brain.count_uniqueWords() << endl;

}
