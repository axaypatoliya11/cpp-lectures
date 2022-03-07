// we can access only public type of access modifier inherited classes

#include<iostream>
using namespace std;

// common class which wil be there for multiple classes
class Person{
    int age, height, weight;
    public:
        void Talk(){
            cout<<"this is a talk method"<<endl;
        }
    private:
        void Walk(){
            cout<<"this is a walk method"<<endl;
        }
    protected:
        void Eat(){
            cout<<"this is a eat method"<<endl;
        }
};

// classes in which Person class will be inherited
class Doctor:public Person{ //if we write here private instead of public then we can't access it
    public:
    void profession() {
        cout << "I'm a doctor!!" << endl;
    }
};

class Businessman:public Person{
    public:
    void profession() {
        cout << "I'm a businessman!!" << endl;
    }
};

class Footballer:public Person{
    public:
    void profession() {
        cout << "I'm a footballer!!" << endl;
    }
};

int main(){

    Doctor steve;
    steve.Talk();
    steve.Walk(); //this is inaccessible because it's private
    steve.Eat(); //this is inaccessible because it's protected
    steve.profession();

    Businessman bill;
    bill.Talk();
    bill.Walk();
    bill.Eat();
    bill.profession();

    Footballer ronaldo;
    ronaldo.Talk();
    ronaldo.Walk();
    ronaldo.Eat();
    ronaldo.profession();

    return 0;
}