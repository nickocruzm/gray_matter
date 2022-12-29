#ifndef _FILEMANAGER_HPP_
#define _FILEMANAGER_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::vector; using std::string;
using std::ifstream; 
using std::cout; using std::endl;
class FileManager{
    protected:
        vector<string> files;
        
    public:
        FileManager(); // Default Constructor

        void add_file(string fileName); // appends the name to fileNames

        vector<string> read(); // reads file into vector.
        
};

#endif