#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>

using namespace std;

int main(){
    ifstream file;
    file.open("sample.txt");

    int words_ends_with_s=0;
    string temp;

    if(!file){
        cout<<"cannot open the file"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp; //this will copies the content(word by word) of file to a temp variable
            if(temp[temp.length()-1]=='s'){
                words_ends_with_s++;
            }
            
        }
        cout<<"number of words starts with 'e' in the file is: "<<words_ends_with_s<<endl;
    }


    file.close();


    return 0;
}