// delete is used to free up the space
#include<iostream>

using namespace std;

int main(){
    // declaration of variables
    int *ptr1, *ptr2, sum;

    // allocated memory space using new operator
    ptr1 = new int;
    ptr2 = new int;

    cout<<"enter the first number: ";
    cin>>*ptr1;
    cout<<endl<<"enter the first number: ";
    cin>>*ptr2;
    sum = *ptr1 + *ptr2;
    cout<<endl<<"Sum of pointer variables = "<<sum<<endl;
    delete ptr1;
    delete ptr2;

    return 0;
}