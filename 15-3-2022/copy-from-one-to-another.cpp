#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream fin, fout;

    fin.open("sample.txt", ios::app);
    fout.open("sample1.txt", ios::app);

    char ch;
    string temp;

    while(!fin.eof()){
        // fin.get(ch); //copies character by character
        // fout<<ch;

        // fin>>temp; //copies word by word
        // fout<<temp<<" ";

        getline(fin, temp); //copies line by line
        fout<<temp<<"\n";
    }
    cout<<"copy done"<<endl;
    fin.close();
    fout.close();

    return 0;
}