#include <iostream>
using namespace std;



int main(){
    int number = 10, n2, result;

    cout<<"enter the denominator: ";
    cin>>n2;

    try{
        if(n2==0){
            throw n2; //it goes to the catch part(identifies by the data type)
        } else{
            result = number/n2;
            cout<<result<<endl;
        }
    }
    catch(int x){
        cout<<"can't divide by "<<x<<endl;
    }
    


    return 0;
}
