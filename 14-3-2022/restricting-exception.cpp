#include<iostream>

using namespace std;

void demo()throw(int, double){ //we are restricting the character throw. allowing only int and double throw
    int a = 1; //if we write 2 over here then segmentation fault will come because for a==2 it will throw character catch and that's not allowed
    if(a==1){
        throw a;
    } else if(a==2){
        throw 'A';
    } else if(a==3){
        throw 1.5;
    }
}

int main(){
    try{
        demo();
    }
    catch(int a){
        cout<<"exception caught"<<endl;
    }

    cout<<"end of program"<<endl;
    return 0;
}