// templates we can create for:
// 1)class 2)function 3)variables

#include<iostream>
using namespace std;

template <typename T>
T sum(T n1, T n2){
    T ans = n1 + n2;
    return ans;
}

template <typename I, typename F>
I sum_all(I n1, F n2){
    I ans = n1 + n2;
    return ans;
}

template<typename T, typename U>
T multiply(T num1, U num2){
    return num1*num2;
}

int main(){
    int ans = sum(10, 25);
    float ans2 = sum_all(10.50, 25);
    int ans3 = multiply(10.5, 50.5);
    
    cout<<"answer is: "<<ans<<endl;
    cout<<"answer is: "<<ans2<<endl;
    cout<<"answer is: "<<ans3<<endl;
    
    return 0;
}