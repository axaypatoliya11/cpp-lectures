#include<iostream>
#include<exception>

using namespace std;

int main(){
    try{
        int* myarray = new int[10000000000000];
    }
    // no need to throw saperately
    catch(exception &e){
        cout<<"std exception"<<e.what()<<endl;
    }
    return 0;
}

