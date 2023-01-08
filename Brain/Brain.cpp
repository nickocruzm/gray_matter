#include "Brain.hpp"


Brain::Brain(Content c){
    this->content = c;
    this->unq_words = {};
}

Brain::Brain(){
    this->unq_words = {};
};

int Brain::count_uniqueWords(){
    for(int i = 0; i < this->content.words.size(); i++){
        this->unq_words.insert(this->content.words[i]);
    }
    return this->unq_words.size();
}

int Brain::count_uniqueWords(vector<string>& words){
    this->content = Content();
    content.assign_words(words);

    return this->count_uniqueWords();
}


