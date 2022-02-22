#include<iostream>

using namespace std;

class Complex{
    int real, img;
    public:
        Complex(int a=0, int b=0){
            real = a;
            img = b;
        }

        // method to cout the object
        void display(){
            cout<< "real = "<<real<<endl<<"imaginary = "<<img<<endl<<endl;
        }

        // operator overloading using friend friend function
        friend Complex operator+(Complex passed1, Complex passed2){
            Complex temp;
            temp.real = passed1.real + passed2.real;
            temp.img = passed1.img + passed2.img;
            return temp;
        }

        friend Complex operator-(Complex passed1, Complex passed2){
            Complex temp;
            temp.real = passed1.real - passed2.real;
            temp.img = passed1.img - passed2.img;
            return temp;
        }

        friend Complex operator*(Complex passed1, Complex passed2){
            Complex temp;
            temp.real = passed1.real * passed2.real;
            temp.img = passed1.img * passed2.img;
            return temp;
        }

        friend Complex operator/(Complex passed1, Complex passed2){
            Complex temp;
            temp.real = passed1.real / passed2.real;
            temp.img = passed1.img / passed2.img;
            return temp;
        }
};

int main(){
    Complex comp1(20,40), comp2(10,10), comp3, comp4;
    comp1.display();
    comp2.display();

    // method-1 to invoke the friend function
    // comp3 = comp1 + comp2;
    // comp3.display();

    // method-2 to invoke the friend function
    cout<<"after addition operator overloading"<<endl;
    comp4 = operator+(comp1, comp2);
    comp4.display();

    cout<<"after subtraction operator overloading"<<endl;
    comp4 = operator-(comp1, comp2);
    comp4.display();

    cout<<"after multiplication operator overloading"<<endl;
    comp4 = operator*(comp1, comp2);
    comp4.display();

    cout<<"after division operator overloading"<<endl;
    comp4 = operator/(comp1, comp2);
    comp4.display();
    return 0;
}