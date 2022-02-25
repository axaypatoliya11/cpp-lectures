#include<iostream>

using namespace std;

class location{
    int log, lat;
    public:
        location(){
            log = 0;
            lat = 0;
        }
        location(int a, int b){
            log = a;
            lat = b;
        }
        void Display(){
            cout<<"Coordinates are: long: "<<log<<" lat: "<<lat<<endl;
        }

        // method to overload the new and delete keyword
        void * operator new(size_t byte){
            void *ptr;
            cout<<"inside the overload new"<<endl;
            ptr = malloc (byte);
            if(ptr==NULL){
                cout<<"could not allocate the memory"<<endl;
                exit;
            }
            return ptr;
        }

        void operator delete(void * ptr){
            cout<<"inside the overloaded delete"<<endl;
            free(ptr);
        }

};

class demo{
    int a, b;
    public:
        demo(){
            cout<<"Inside demo's const"<<endl;
        }
        void display(){
            cout<<"demo's values are"<<a<<" and "<<b<<endl;
        }

};

int main(){
    location l1, l2(10,5);
    l1.Display();
    l2.Display();

    // in order to call the new overloader we have to create the pointer
    location *l3 = new location; //this will call the new overloader function
    l3->Display();

    delete l3;

    int *l4 = new int; //this will not calls the new overloader method because new overloader is a class based not global. without class specifying it will creates the by default datatype memory size(l4 is not an object of the location class so that it will not call the new overloader method)


    demo *ptr = new demo;

    location *loc2 = new location[2];

    

    return 0;
}

// HW: overload new[], delete[] operators
// HW: overload the operators in global mode