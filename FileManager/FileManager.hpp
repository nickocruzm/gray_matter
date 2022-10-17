#ifndef _FILEMANAGER_HPP_
#define _FILEMANAGER_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class FileManager{
    protected:
        std::vector<std::string> fileNames;
    public:
        FileManager(); // Default Constructor

        void add_file(std::string fileName); //appends the name to fileNames

        void read(std::string& ); // reads in file.
        
};

#endif