// a pure virtual function is virtual function that has no defination within the base class
// a pure virtual function means do nothing
#include<iostream>

using namespace std;

class Shape{
    protected:
        float x;
    public:
        void getData(){
            cin >> x;
        }

        virtual float calculateArea() = 0;
};

class Square:public Shape{
    public:
        float calculateArea(){
            return x*x;
        }
};

class Circle:public Shape{
    public:
        float calculateArea(){
            return 3.14*x*x;
        }
};

int main(){
    Square sq;
    sq.getData();
    float x = sq.calculateArea();
    cout<<x<<endl;

    Circle cr;
    cr.getData();
    float y = cr.calculateArea();
    cout<<y<<endl;

    return 0;
}