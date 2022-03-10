#include<iostream>

using namespace std;

class Base{
    public:
        virtual void print(){
            cout<<"this is a base class"<<endl;
        }
};

class der1:public Base{
    public:
        void print(){
            cout<<"this is a derived 1"<<endl;
        }
};

class der2:public Base{
    public:
        void print(){
            cout<<"this is a derived 2"<<endl;
        }
};

int main(){
    der1 d1;
    der2 d2;
    d2.print();
    return 0;
}