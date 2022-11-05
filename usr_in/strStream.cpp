#include "../headers.hpp"

int main(){
    string input;
    getline(cin, input);

    stringstream ss(input);

    string name;
    string course;
    string grade;

    ss >> name >> course >> grade;

    cout<< "name: "<< name << endl;
    cout<< "course: "<< course<< endl;
    cout<< "grade: "<< grade<< endl;



}