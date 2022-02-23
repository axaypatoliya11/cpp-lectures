#include<iostream>

using namespace std;

class Demo{
    int a;
    public:
        Demo(int x=0){
            a = x;
        }

        void display(){
            cout<<"value of a is: "<<a<<endl;
        }

        Demo operator ++(){
            Demo temp;
            // ++a;
            temp.a = ++a;
            // cout<<"pre increment: "<<temp.a<<endl;
            return temp;
        }

        Demo operator ++(int){
            Demo temp;
            // a++;
            temp.a = a++;
            // cout<<"post increment: "<<a<<endl;
            return temp;
        }

};

int main(){
    Demo d1(10), d2, d3;
    cout<<"pre increment"<<endl;
    d2 = ++d1;
    d2.display();
    cout<<"post increment"<<endl;
    d3 = d1++;
    d3.display();
    cout<<"after post increment value of d1 is"<<endl;
    d1.display();
    return 0;
}