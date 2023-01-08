#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include "../Headers.hpp"
#include "../Content/Content.hpp"

class Brain{
    public:
        set<string> unq_words = {};
        Content content;

        Brain(Content );
        Brain();

        int count_uniqueWords();
        int count_uniqueWords(vector<string>& ); // Argument error when passing Reader.get_words() func




};



#endif