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

class Nurse:public Person{
    public:
        void nurse(){
            cout<<"this is a nurse class method"<<endl;
        }
        void accessTalk(){
            Talk();
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
    mark.doc(); //we can call this method here because Doctor class is inherited to the Nurse class
    mark.nurse();
    mark.patient();

    mark.accessTalk(); //we can't directly access the Talk function so we written one method inside a Nurse function and this function contains calls Talk() internally, we can call methods from Nurse so this is how we can access the Talk() function


    return 0;
}