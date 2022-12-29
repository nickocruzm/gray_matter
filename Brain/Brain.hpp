#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include "Basic_Headers.hpp"

class Brain{

    protected:
        vector<string> data;

    private:

    public:
        Brain();
        void set_data(vector<string>& );

        int get_uniqueWords();




};



#endif