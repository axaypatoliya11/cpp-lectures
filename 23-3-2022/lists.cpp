#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> lst; //create an empty list
    for(int i=0; i<10; i++){
        lst.push_back(i); //adds elements from end of the list
    }

    cout<<"size of the list: "<<lst.size()<<endl;
    cout<<"contents of the list";

    list<int>::iterator p = lst.begin(); //p will contains the address of the first element in the list

    while (p!=lst.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl<<endl;

    p = lst.begin();

    while (p!=lst.end()){
        *p = *p + 100;
        p++;
    }

    cout<<"entents modified: ";
    p = lst.begin();
    while(p!=lst.end()){
        cout<<*p<<" ";
        p++;
    }

    cout<<endl<<"printing in reverse order: ";
    p = lst.end();
    while (p!=lst.begin()){
        p--; //--before becaue it lst.end() point to the length_of_list+1's element
        cout<<*p<<" ";
    }

    

    return 0;
}