#include<iostream>

using namespace std;

int main(){
    int a = 0, b = 0;
    int i, n = 4;
    int array[n][n] = {{5,6,7,8},{9,4,2,5},{1,2,3,4},{7,8,9,0}};
    for (int i = 0; i <= n-1; i++)
    {
        a = a + array[i][i];
        b = b + array[i][n-i-1];
    }

    if (a>b)
    {
        cout<<a-b<<endl;
    }
    else{
        cout<<b-a<<endl;
    }
    
    

    return 0;
}