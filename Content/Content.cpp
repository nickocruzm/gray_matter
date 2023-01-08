#include "Content.hpp"

Content::Content(){
    this->lines = {};
    this->words = {};
};

void Content::lines_append(string line){
    this->lines.push_back(line);
}

void Content::words_append(string word){
    this->words.push_back(word);
}