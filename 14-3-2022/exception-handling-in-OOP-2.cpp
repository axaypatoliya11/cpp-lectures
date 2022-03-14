// this is not a proper way to throw an exception

#include<iostream>

using namespace std;

class Test{
    int x;
    public:
        void read(){
            cout<<"enter a number: ";
            cin>>x;
        }

        class EVEN{}; //abstract class for exception
        class ODD{};

        void check(){
            if(x%2==0){
                throw EVEN(); //this is constructor of the EVEN class and EVEN() will creates a object and throws it
            } else{
                throw ODD();
            }
        }
};


int main(){
    Test t1;
    t1.read();
    try{
        t1.check();
    }
    catch(Test::EVEN){ //this will specify that EVEN class which is inside the Test class
        cout<<"Number is Even";
    }
    catch(Test::ODD){
        cout<<"Number is Odd";
    }
    return 0;
}