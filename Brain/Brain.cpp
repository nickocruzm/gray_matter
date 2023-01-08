#include "Brain.hpp"


Brain::Brain(){
    this->data = {};
    this->unq_words = {};
}

void Brain::set_data(vector<string>& data){
    this->data = data;
}

int Brain::count_uniqueWords(){
    for(int i = 0; i < this->data.size(); i++){
        this->unq_words.insert(this->data[i]);
    }
    return this->unq_words.size();
}



