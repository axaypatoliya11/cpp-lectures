// Function Overriding / Method Overriding

#include<iostream>

using namespace std;

class ABC{
    public:
        void display(int num){
            cout<<"this is a parent class and number is: "<<num<<endl;
        }
};

class XYZ:public ABC{
    public:
        void display(string name){
            cout<<"this is child class and name is: "<<name<<endl;
        }
};

int main(){
    XYZ x;
    x.display("Axay"); //this will invokes the display function of the class XYZ
    x.ABC::display(10); //this will invokes the display function of the class ABC
    return 0;
}