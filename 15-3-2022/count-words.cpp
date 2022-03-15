// ERROR CHECKING

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file;
    string temp;
    int count=0;
    file.open("sample.txt");

    if(!file){
        cout<<"cannot open the file"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp; //this will copies the content(word by word) of file to a temp variable
            cout << temp << endl;
            count++;
        }
    }
    cout<<"count of the words are: "<<count<<endl;
    return 0;
}