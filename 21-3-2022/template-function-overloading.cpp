#include<iostream>

using namespace std;

template<class T1>
void sum(T1 a, T1 b, T1 c){
    cout<<"sum: "<<a+b+c<<endl;
}

template<class T1, class T2>
void sum(T1 a, T2 b, T1 c){
    cout<<"sum: "<<a+b+c<<endl;
}

int main(){
    sum(10, 20, 30);
    sum(10,20.5,20);
    return 0;
}
