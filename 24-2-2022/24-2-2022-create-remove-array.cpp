#include<iostream>

using namespace std;

int main(){
    int n, *arr = new int[n];
    cout<<"enter the size of array: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];
    }

    for (int i=0; i<n; i++) {
        cout<<endl<< arr[i]<<endl;
    }

    delete arr;
    cout<<"deleting the reference..."<<endl;
    

    return 0;
}