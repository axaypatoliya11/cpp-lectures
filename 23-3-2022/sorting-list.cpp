#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> lst; //create an empty list
    for(int i=0; i<10; i++){
        lst.push_back(rand()%20); //adds elements from end of the list
    }

    list<int>::iterator p = lst.begin(); 

    cout<<"before sort"<<endl;
    while(p!=lst.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;

    lst.sort();
    p = lst.begin();

    cout<<"after sort"<<endl;
    while(p!=lst.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;

   
    return 0;
}