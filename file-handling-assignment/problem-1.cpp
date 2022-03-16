#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>

using namespace std;

int main(){
    ifstream file;
    file.open("sample.txt");

    int a_time=0;
    string temp;

    if(!file){
        cout<<"cannot open the file"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp; //this will copies the content(word by word) of file to a temp variable
            for(int i=0; i<temp.length(); i++){
                temp[i] = tolower(temp[i]);
            }
            if(temp=="the"){
                a_time++;
            }
            
        }
        cout<<"number of word 'the' present in the file is: "<<a_time<<endl;
    }


    file.close();


    return 0;
}