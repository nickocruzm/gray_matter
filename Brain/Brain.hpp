#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include "Basic_Headers.hpp"

class Brain{

    protected:
        vector<string> data;
        set<string> unq_words;

    private:

    public:
        Brain();
        void set_data(vector<string>& );

        int count_uniqueWords();




};



#endif