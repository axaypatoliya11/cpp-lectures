// friend function 
// static data members
// static member function
// constructors
// destructors

#include<iostream>

using namespace std;

class ABC{
    int num1, num2;
    public:
        void setDataABC(int a, int b);
        friend int add(ABC obj1);
};

class XYZ{
    int num1, num2;
    public:
        void setDataXYZ(int a, int b);
};

void ABC::setDataABC(int a, int b){
            num1 = a;
            num2 = b;
        }
void XYZ::setDataXYZ(int a, int b){
            num1 = a;
            num2 = b;
        }

int add(ABC obj1){
    return obj1.num1 + obj1.num2;
}

int main(){
    ABC obj;
    obj.setDataABC(10,20);
    cout<<add(obj)<<endl;

    return 0;
}