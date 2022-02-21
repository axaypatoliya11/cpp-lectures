#include<iostream>

using namespace std;

// this is called polymorphism -> this concept is not there in C.
int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int sum(int a, int b, int c, int d){
    return a+b+c+d;
}

// we can do it with the different return datatype as well
string sum(string fn, string ln){
    return fn + " " + ln;
}

int main(){
    cout<<sum(1,2)<<endl;
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2,3,4)<<endl;

    cout<<"full name is: "<<sum("John", "Doe")<<endl;
    return 0;
}