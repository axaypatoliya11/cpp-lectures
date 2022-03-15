// ERROR CHECKING

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file;
    string temp;
    file.open("sample.txt");

    if(!file){
        cout<<"cannot open the file"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp; //this will copies the content(word by word) of file to a temp variable
            cout << temp << endl;
        }
    }
    return 0;
}