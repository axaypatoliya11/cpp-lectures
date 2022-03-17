#include<iostream>

using namespace std;

template<typename I, typename D>
void swap(I *a, D *b){
    I int_temp;
    int_temp = *a;
    *a = *b;
    *b = int_temp;
}

int main(){
    int a = 10;
    float b = 11.2;
    char c = 'a';
    string name1 = "vito";
    string name2 = "carlone";

    cout<<"before:"<<endl<<"integer: "<<a<<endl<<"float: "<<b<<endl<<endl;

    swap(&a, &b); //we have to pass the address of the variables here(in case of numbers)

    // swap(name1, name2); //we have to pass the variables here(in case of strings/chars)

    cout<<"after:"<<endl<<"integer: "<<a<<endl<<"float: "<<b<<endl;

    return 0;
}