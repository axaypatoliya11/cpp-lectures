#include<iostream>

using namespace std;

class Base{
    int a;
    public:
        void setBase(int k){
            a = k;
        }

        void getBase(){
            cout<<"base class value of variable = "<<a<<endl;
        }

        class baseChild{
            int a;
            public:
                void setBaseChild(int k){
                    a = k;
                }

                void getBaseChild(){
                    cout<<"baseChild class value of variable = "<<a<<endl;
                }   
        };
};

class Derived:public Base{
    int a;
    public:
        void setDerived(int k){
            a = k;
        }
        void getDerived(){
            cout<<"derived class value of variable = "<<a<<endl;
        }
};


int main(){
    Derived d, *der;
    // der = &d;
    // der->setDerived(10);
    // der->getDerived();

    Base b;

    return 0;
}