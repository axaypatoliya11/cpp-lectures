#include<iostream>

using namespace std;

class base{
    int i, j;
    public:
        void set(int a, int b){
            i = a;
            j = b;
        }
        void show(){
            cout<<i<<" "<<j<<endl;
        }
};

class derived1:private base{
    int k;
    public:
        void setk(){
            k = i*j; //we can't access it over here because i & j can only be accessed with it's class methods
        }
};

class derived2: public derived1{
    int m;
    public:
        void setm(){
            m = i-j; //we can't access it over here because i & j can only be accessed with it's class methods
        }
        void show(){
            cout<<m<<endl;
        }
};

int main(){
    derived1 ob1;
    derived2 ob2
    ob1.set(1,2); //we can't call the method because we inherited base class to the derived in a private mode
    ob1.show();
    ob2.set(3,4);
    ob2.show();
    ob2.setk();
    ob2.show();
    return 0;
}

// HW: how to grant access to the derived class?