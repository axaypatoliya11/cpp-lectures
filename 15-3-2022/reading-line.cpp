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
            getline(file, temp); //this will copies the content(line by line) of file to a temp variable
            cout << temp << endl;
        }
    }
    return 0;
}