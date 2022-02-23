#include<iostream>

using namespace std;

int main(){
    float *pt = new float;
    *pt = 55;
    cout<<"value = "<<*pt<<endl;
    cout<<"address = "<<pt<<endl;
    cout<<"size of value = "<<sizeof(pt)<<endl;
    cout<<"size of address = "<<sizeof(*pt)<<endl;
    return 0;
}