#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream fp;
    char buf[100];
    int pos;

    fp.open("data.txt", ios::out|ios::ate);
    cout<<"writing to a file"<<endl;
    fp<<"line one"<<endl;
    fp<<"line two"<<endl;
    pos = fp.tellp(); //returns the current pointer position
    cout<<"current position "<<pos<<endl;
    fp.seekp(-7, ios::cur); //set pointer to 7 position left from current
    fp<<endl<<"random data";
    fp.seekp(7, ios::beg); //set pointer to the 7 position right from begining

    fp<<"hello world";
    fp.close();
    cout<<"done writing"<<endl;
    fp.open("data.txt");
    cout<<"reading the file"<<endl;
    fp.seekg(0);

    while(fp.getline(buf, 100)){
        cout<<buf<<endl;
    }

    pos = fp.tellg();
    cout<<"pos pointer is at: "<<pos<<endl;

    fp.close();

    return 0;
}