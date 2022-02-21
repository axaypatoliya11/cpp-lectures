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
        // copy constructor
        Distance(Distance &p1){
            feet = p1.feet;
            inch = p1.inch;
            cout<<"copy constructor called"<<endl;
        };
};


int main(){

    Distance first(90,100);
    Distance second = first;
    cout<<second.feet << " and " << second.inch<<endl;

    return 0;
}