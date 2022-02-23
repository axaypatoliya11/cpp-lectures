#include<iostream>

using namespace std;
class Class2;
class Class1{
    int a, b;
    string c;
    public:
        Class1(int x=0, int y=0, string z="Initial"){
            a = x;
            b = y;
            c = z;
        }
        
        void getData(){
            cout<<"a is: "<<a<<" and b is: "<<b<<" c is: "<<c<<endl;
        }

        friend Class1 operator+(Class1 c1, Class2 c2);
};

class Class2{
    int a, b, c;
    public:
        Class2(int x=0, int y=0, int z=0){
            a = x;
            b = y;
            c = z;
        }
        void sum(){
            cout<< "addition of a and b is " << a + b << endl;
        }
        void getData(){
            cout<<"a is: "<<a<<" and b is: "<<b<<" and c is "<<c<<endl;
        }
        friend Class1 operator+(Class1 c1, Class2 c2);
};

Class1 operator+(Class1 c1, Class2 c2){
    Class1 temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}

int main(){
    Class1 c1(10,20, "passed string");
    c1.getData();

    Class2 c2(30,40,1000);
    c2.getData();

    Class1 c3 = c1 + c2; //first method to friend function invoke operator overloading
    // Class1 c3 = operator+(c1, c2); //second method to friend function invoke operator overloading
    c3.getData();
    
    return 0;
}