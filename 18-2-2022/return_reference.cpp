#include<iostream>

using namespace std;

int& max(int &x, int &y){
    if(x>y){
        return x;
    } else{
        return y;
    }
}

int main(){
    int a = 5, b = 6, ans;
    ans = max(a,b);
    cout<<"maximum= "<<ans<<endl;
    return 0;
}