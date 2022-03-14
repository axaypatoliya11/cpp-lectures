#include<iostream>

using namespace std;

void Xtest(int test){
    cout<<"inside Xtest, test is: "<<test<<endl;
    if(test) throw test;
}

int main(){
    cout<<"start"<<endl;
    try{
        cout<<"inside try block"<<endl;
        Xtest(0);
        Xtest(1); //from here exception will be generated so further execution will no be take place
        Xtest(2);
        Xtest(3);
        Xtest(4);
        cout<<"exit"<<endl;
    }
    catch(int i){
        cout<<"caught an exception, value = "<<i<<endl;
    }
    return 0;
}