// parameterized constructor - takes parameters in a constructor
#include<iostream>

using namespace std;

class Distance{
    public:
        int feet, inch;
        
        // parameterized constructor
        Distance(int f, int i){
            feet = f;
            inch = i;
            cout<<"constructor called & feet = "<< feet << " and inch = " << inch << endl; 
        };
        // normal constructor
        Distance(){
            cout<<"normal constructor called";
        };
};


int main(){

    Distance first(10,20);

    return 0;
}