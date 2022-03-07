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

class Nurse{
    public:
        void nurse(){
            cout<<"this is a nurse class method"<<endl;
        }
};

class Patient:public Nurse, public Doctor{
    public:
        void patient(){
            cout<<"this is a patient class method"<<endl;
        }
};

int main(){

    Patient mark;
    mark.Talk();
    mark.Walk();
    mark.Eat();
    mark.doc(); //we can call this method here because Doctor class is inherited to the Nurse class
    mark.nurse();
    mark.patient();


    return 0;
}