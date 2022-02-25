#include <iostream>
using namespace std;
class A
{ //creating class
public:
    A()
    { //default constructor
        cout << "inside the const" << endl;
    }
};
int main()
{
    int *ptr1, *ptr2, sum;
    A a1, *a2, *a3; // create object
    ptr1 = new int; // assign dynamic memory to ptr1

    a2 = new A[5]; //create array of object type
    a3 = new A;    //assign memory of class size using new
    a3 = NULL;

    cout << "sizeof (a1): " << sizeof(a1) << " sizeof(a2): " << sizeof(a2) << endl;
    cout << "sizeof (sum): " << sizeof(sum) << " sizeof(ptr1): " << sizeof(ptr1) << endl;

    // delete pointer variable
    delete ptr1;
    delete[] a2;
    delete a3;

    return 0;
}