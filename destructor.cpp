// destructor - never take any argument neither returns anything. after program execution for each objects destructor called automatically
#include<iostream>

using namespace std;

class Distance{
    public:
        int feet, inch;
        
        Distance(int f, int i){
            feet = f;
            inch = i;
            cout<<"constructor called & feet = "<< feet << " and inch = " << inch << endl; 
        };

        ~Distance(){
            cout << "Destructor called" << endl;
        };
};


int main(){

    Distance first(10,20);

    return 0;
}