#include<iostream>

using namespace std;

class demo{
    int i;
    public:
    demo(int x){
        i = x;
    }
    int getData(){
        return i;
    }
};

int main(){
    demo d1[3]={1,2,3};
    demo *ptr;
    ptr = &d1[0]; //ptr = d;
    for (int  i = 0; i < 3; i++){
        cout<<ptr->getData()<<endl;
        ptr++;
    }
    

    return 0;
}