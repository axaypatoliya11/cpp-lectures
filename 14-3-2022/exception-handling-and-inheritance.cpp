// exception will be handled by the class which comes first(like if base class written first then exception will be handled by base class and if derived written first then exception wil be handled by derived class)

#include<iostream>

using namespace std;

class Base{};

class Derived:public Base{};

int main(){
    try{
        throw Derived();
    }

    catch(Base b){
        cout<<"enxeption handled using Base class"<<endl;
    }

    catch(Derived d){
        cout<<"enxeption handled using Derived class"<<endl;
    }

    return 0;
}