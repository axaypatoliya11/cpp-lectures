#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>

using namespace std;

int main(){
    ifstream file;
    file.open("sample.txt");

    int words_with_a=0;
    string temp;

    if(!file){
        cout<<"cannot open the file"<<endl;
    }
    else{
        int sam=0;
        while(!file.eof()) {
            file >> temp; //this will copies the content(word by word) of file to a temp variable
            for(int i=0; i<temp.length(); i++){
                if(temp[i] == 'a'){
                    sam++;
                }
            }
            if(sam>0){
                words_with_a++;
                sam=0;
            }
            
        }
        cout<<"number of word which contains a is: "<<words_with_a<<endl;
    }


    file.close();


    return 0;
}