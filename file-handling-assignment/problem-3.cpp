#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>

using namespace std;

int main(){
    ifstream file;
    file.open("sample.txt");

    int words_starts_with_e=0;
    string temp;

    if(!file){
        cout<<"cannot open the file"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp; //this will copies the content(word by word) of file to a temp variable
            if(temp[0]=='e'){
                words_starts_with_e++;
            }
            
        }
        cout<<"number of words starts with 'e' in the file is: "<<words_starts_with_e<<endl;
    }


    file.close();


    return 0;
}