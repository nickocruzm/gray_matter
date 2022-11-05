#include "../headers.hpp"

void file_input(){
    ifstream f;
    f.open("input.txt");

    if(!f){
        cout<< "not open"<<endl;
    }
    string input = "insert start \n";
    
    
    while(input != "end"){
        cin >> input;
        f >> input;

    }

    f.close();

}

int main(){
    file_input();
}