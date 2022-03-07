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
    steve.Walk();
    steve.Eat();
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