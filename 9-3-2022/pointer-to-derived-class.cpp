#include<iostream>

using namespace std;

class base{
    int a;
    public:
        void setA(int x){
            a = x;
        }
        void getA(){
            cout<<"value of a is: "<<a<<endl;
        }
};

class derived:public base{
    int x;
    public:
        void setX(int a){
            x = a;
        }
        void getX(){
            cout<<"value of x is: "<<x<<endl;
        }
};

int main(){
    base b1, *b2;
    derived d1;
    // b2 = &b1;
    b2 = &d1; //we can make pointer of the derived class to the pointer object of the parent class
    b2->setA(10);
    b2->getA();
    // b2->setX(20);

    return 0;
}