#ifndef __READER_HPP__
#define __READER_HPP__

#include "Basic_Headers.hpp"

class Reader{
    private:
        string fileName;

    protected:
        Content content;

    public:
        Reader();
        Reader(string );
        
        Content read();
        void display_words();

};


#endif