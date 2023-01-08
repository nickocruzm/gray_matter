#include "Reader.hpp"

Reader::Reader(){
    this->content = Content();
}

Reader::Reader(string fileName){
    this->fileName = fileName;
}

void Reader::display_words(){
    for(int i = 0; i < this->content.words.size(); i++){
        cout<< this->content.words[i]<< endl;
    }    
}

void Reader::read(){
    if(this->fileName.empty()){
        cout<< "NO FILENAME, Reader object, not assigned a fileName" << endl;
        exit(-1);
    }

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

Content Reader::get_allContent(){
    return this->content;
}

vector<string> Reader::get_lines(){
    return this->content.lines;
}

vector<string> Reader::get_words(){
    return this->content.words;
}