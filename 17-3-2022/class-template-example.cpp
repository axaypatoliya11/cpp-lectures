#include<iostream>

using namespace std;

template <typename T1, typename T2>
class Nums{
    T1 a;
    T2 b;
    public:
        void setNums(T1 i, T2 j){
            a = i;
            b = j;
        }

        void getNums(){
            cout<<"value of a is: "<<a<<endl<<"value of b is: "<<b<<endl;
        }
};

int main(){
    Nums<int, long> ob1;
    Nums<int, long> ob2;

    int a = 10, b = 20, c;
    long A = 11.12, B = 22.23, C;

    ob1.setNums(a,b);
    ob1.getNums();

    ob1.setNums(A,B);
    ob1.getNums();

    return 0;
}