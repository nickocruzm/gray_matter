#ifndef __CONTENT_HPP__
#define __CONTENT_HPP__

#include "../Basic_Headers.hpp"

class Content{
    protected:
        vector<string> lines;
        vector<string> words;

    public:
        Content(){
            this->lines = {};
            this->words = {};
        };

        void lines_append(string line);

        void words_append(string word);
};

#endif