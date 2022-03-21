#include<iostream>

using namespace std;

template <typename X>
void swapp(X &a, X &b){
    X temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"inside template swapp"<<endl;
}

void swapp(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"inside template swapp"<<endl;
}

using namespace std;

int main(){
    int a = 10, b = 20;
    double c = 10.10, d = 20.20;
    char e = 'a', f = 'b';

    cout<<"origin: "<<a<<" "<<b<<endl;
    cout<<"origin: "<<c<<" "<<d<<endl;
    cout<<"origin: "<<e<<" "<<f<<endl;

    swapp(a, b); //calls explicitly swapp();
    swapp(c, d); //calls explicitly swapp();
    swapp(e, f); //calls explicitly swapp();

    cout<<"swapped: "<<a<<" "<<b<<endl;
    cout<<"swapped: "<<c<<" "<<d<<endl;
    cout<<"swapped: "<<e<<" "<<f<<endl;

    return 0;
}