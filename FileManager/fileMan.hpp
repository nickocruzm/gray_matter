#ifndef _FILEMAN_HPP_
#define _FILEMAN_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class FileMan{
    protected:
        std::vector<std::string> fileNames;
    public:
        FileMan::FileMan(); // Default Constructor

        void add_file(std::string fileName); //appends the name to fileNames
        
        void read(std::string& ); // reads in file.
};

#endif