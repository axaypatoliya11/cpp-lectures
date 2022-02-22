// operator overloading
// operator overloading using friend function
#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(){
        real = 0;
        img = 0;
    }
    complex(int x, int y){
        real =x;
        img = y;
    }
    void display(){
        cout<< "real = "<<real<<endl<<"imaginary = "<<img<<endl<<endl;
    }
    //overloading
    complex operator +(complex ob){ //member function which are overriding the value can have 0 or 1 argument only
        complex temp;
        temp.real = real +ob.real;
        temp.img = img +ob.img;
        return temp;
    }
    complex operator -(complex ob){
        complex temp;
        temp.real = real -ob.real;
        temp.img = img -ob.img;
        return temp;
    }
    complex operator *(complex ob){
        complex temp;
        temp.real = real *ob.real;
        temp.img = img *ob.img;
        return temp;
    }
    complex operator /(complex ob){
        complex temp;
        temp.real = real /ob.real;
        temp.img = img /ob.img;
        return temp;
    }

};
int main(){
    complex c1(5,5), c2(2,2);
    complex c3;
    c1.display();
    c2.display();
    c3.display();
    cout<<"starting action "<<endl;
    cout<<"add "<<endl;
    c3 = c1.operator+(c2);
    c3.display();
    cout<<"substraction "<<endl;
    c3 = c1.operator-(c2);
    c3.display();
    cout<<"multiplication "<<endl;
    c3 = c1.operator*(c2);
    c3.display();
    cout<<"division "<<endl;
    c3 = c1.operator/(c2);
    c3.display();
    cout<<"add 1000 "<<endl;
    return 0;
}