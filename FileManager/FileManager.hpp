#ifndef _FILEMANAGER_HPP_
#define _FILEMANAGER_HPP_

#include "../Basic_Headers.hpp"

class FileManager{
    protected:
        vector<string> files;
        
    public:
        FileManager(); // Default Constructor

        void add_file(string fileName); // appends the name to fileNames

        vector<string> read(); // reads file into vector.
        
};

#endif