#include "Reader.hpp"

struct Content{
    vector<string> lines;
    vector<string> words;

    Content(){
        this->lines = {};
        this->words = {};
    };

    void lines_append(string line){
        this->lines.push_back(line);
    }

    void words_append(string word){
        this->words.push_back(word);
    }
};


Reader::Reader(){
    this->content;
}

Reader::Reader(string fileName){
    this->fileName = fileName;
}

void Reader::display_words(){

    for(auto w: this->content.words){
        cout<< w << endl;
    }
    
}

Content Reader::read(){
    ifstream fileStream;
    fileStream.open(this->fileName);

    string line,word;
    if(fileStream.is_open()){

        while(std::getline(fileStream,line))
        {
            this->content.lines_append(line);

            for(auto c : line){
                if (c == ' ' || c == '.' || c == ','){
                    this->content.words_append(word);
                    word = "";
                }
                else{
                    word = word + c;
                }
            }

        }

        fileStream.close();
    }
    else{
        cout<<"Failed to open file" << endl;
    }

};