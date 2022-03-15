// ERROR CHECKING

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file;
    string temp;
    int count = 0;
    file.open("sample.txt");

    if(!file){
        cout<<"cannot open the file"<<endl;
    }
    else{
        while(!file.eof()) {
            getline(file, temp); //this will copies the content(line by line) of file to a temp variable
            cout << temp << endl;
            ++count;
        }
    }
    cout<<"number of lines: "<<count<<endl;
    return 0;
}