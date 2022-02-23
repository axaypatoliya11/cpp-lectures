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

        void operator -(){
            a = -a;
            b = -b;
        }

        void operator --(){
            a--;
            b--;
        }
};

int main(){

    Sample s1(10,20);
    s1.display();

    // s1.operator-(); //method-1 to invoke the operator overloader
    -s1; //method-2 to invoke the operator overloader
    s1.display();

    // s1.operator--(); //method-1 to invoke the operator overloader
    --s1; //method-2 to invoke the operator overloader
    s1.display();

    return 0;
}