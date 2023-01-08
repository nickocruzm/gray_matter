#include "Headers.hpp"
#include "Brain/Brain.hpp"
#include "Readers/Reader.hpp"

int main(){
    Reader reader("raw.txt");
    reader.read();

    Content content = reader.get_allContent();
    Brain brain(content);

    cout<< brain.count_uniqueWords();

    
    
}
