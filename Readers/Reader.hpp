#ifndef __READER_HPP__
#define __READER_HPP__

#include "../Content/Content.hpp"
#include "../Headers.hpp"

class Reader{

    public:
        string fileName;
        Content content;

        
        Reader();
        Reader(string );

        void read();
        void display_words();

        Content get_allContent();

        vector<string> get_lines();

        vector<string> get_words();

};


#endif