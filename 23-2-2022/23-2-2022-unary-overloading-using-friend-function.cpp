// homework: try to overload the unary operator overloading using friend function
// program to unary operator overloading using friend function
#include<iostream>

using namespace std;

class Sample{
    int a, b;
    public:
        Sample(int x=0, int y=0){
            a = x;
            b = y;
        }

        void display(){
            cout<<"a = "<<a<<","<<"b = "<<b<<endl;
        }

        friend Sample operator--(Sample &passed){ //passing by reference so that object values can be change actually
            Sample temp;
            temp.a = --passed.a;
            temp.b = --passed.b;
            return temp;
        }

        friend Sample operator++(Sample &passed){
            Sample temp;
            temp.a = ++passed.a;
            temp.b = ++passed.b;
            return temp;
        }
};

int main(){

    Sample s1(10,20), s2, s3(100,100);
    s1.display();

    // s2 = --s3; //one way to invoke the friend function

    s2 = operator--(s3); //another way to invoke the friend function
    s2.display();

    s2 = operator++(s3);
    s2.display();

    return 0;
}