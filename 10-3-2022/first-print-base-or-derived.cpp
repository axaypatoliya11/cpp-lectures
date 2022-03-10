#include<iostream>

using namespace std;

class Class1{
    public:
        virtual void print(){
            cout<<"printing base"<<endl;
        }
};

class Class2:public Class1{
    public:
        void print(){
            cout<<"printing derived 1"<<endl;
        }
};

class Class3:public Class1{
    public:
        void print(){
            cout<<"printing derived 2"<<endl;
        }
};

int main(){
    Class1 c2, *ptr2;
    Class3 c3, c31;
    ptr2 = &c3;

    ptr2->print();

    ptr2 = &c31;
    ptr2->print();

    return 0;
}

