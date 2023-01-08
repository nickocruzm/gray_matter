#ifndef __CONTENT_HPP__
#define __CONTENT_HPP__

#include "../Headers.hpp"
class Content{

    public:
        vector<string> lines;
        vector<string> words;
        
        Content();

        void assign_lines(vector<string>& );
        void assign_words(vector<string>& );

        void lines_append(string line);
        void words_append(string word);
};

#endif