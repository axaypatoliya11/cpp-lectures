#include<iostream>

using namespace std;

// common class which wil be there for multiple classes
class Person{
    int age, height, weight;
    public:
        void Talk(){
            cout<<"this is a talk method"<<endl;
        }
        void Walk(){
            cout<<"this is a walk method"<<endl;
        }
        void Eat(){
            cout<<"this is a eat method"<<endl;
        }
};

// classes in which Person class will be inherited
class Doctor:public Person{
    public:
        void doc(){
            cout<<"this is a doctor class method"<<endl;
        }
};

class Nurse:public Doctor{
    public:
        void nurse(){
            cout<<"this is a nurse class method"<<endl;
        }
};

int main(){

    Doctor steve;
    steve.Talk();
    steve.Walk();
    steve.Eat();
    steve.doc();

    Nurse bill;
    bill.Talk();
    bill.Walk();
    bill.Eat();
    bill.doc(); //we can call this method here because Doctor class is inherited to the Nurse class
    bill.nurse();

    return 0;
}