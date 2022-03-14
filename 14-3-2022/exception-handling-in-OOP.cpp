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
                throw EVEN();
            } else{
                throw ODD();
            }
        }
};

int main(){
    Test t1;
    t1.read();
    t1.check();
    return 0;
}