// ERROR CHECKING

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file;
    string temp, temp1;
    file.open("sample.txt");

    if(!file){
        cout<<"cannot open the file"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp >> temp1; //this will copies the content(line by line) of file to a temp variable
            cout << temp << "\t" << temp1 << endl;
        }
    }
    return 0;
}