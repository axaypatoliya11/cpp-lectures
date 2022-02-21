#include<iostream>

using namespace std;

// by reference
void SwapValueRef(int *a, int *b) {
   int t = *a;
   *a = *b;
   *b = t;
}

void swap(int a, int b){
    cout << endl << "after swapping a and b is " << b << " and " << a << endl; 
}

int main(){
    int a, b;
    cout << "enter 1st number: ";
    cin >> a;

    cout << endl << "enter 2st number: ";
    cin >> b;

    swap(a,b);

    SwapValueRef(&a, &b);
    cout<<"after swapping by reference values of a and b is " << a << " and " << b << endl;

    return 0;
}