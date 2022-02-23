// homework: try to overload the unary operator overloading using friend function

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

        friend Sample operator--(Sample passed){
            Sample temp;
            temp.a = --passed.a;
            temp.b = --passed.b;
            return temp;
        }
};

int main(){

    Sample s1(10,20), s2, s3(100,100);
    s1.display();

    s2 = --s3;
    s2.display();

    return 0;
}