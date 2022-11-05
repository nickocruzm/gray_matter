#include "../headers.hpp"

int main(){
    ifstream f;
    

    f.open("input.txt");

    if(!f){
        cout<< "not open"<<endl;
    }

    f.close();





}