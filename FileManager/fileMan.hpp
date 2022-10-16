#ifndef _FILE_MAN_HPP_
#define _FILE_MAN_HPP_

#include <iostream>
#include <string>
#include <vector>

using std::string; 
using std::vector;
class File_Man{
    protected:
        vector<string> fileNames;
    public:
        File_Man(); // Default Constructor
};

#endif