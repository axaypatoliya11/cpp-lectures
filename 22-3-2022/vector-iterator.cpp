#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<char> v(10); //create a vector of length 10
    vector<char>::iterator p; //create an iterator

    // assign elements in vector a value
    p = v.begin();
    int i = 0;
    while(p++ != v.end()){
        *p = i + 'a';
        i++;
    }

    cout<<"original contents of vector"<<endl;
    for (auto i = v.begin(); i != v.end(); ++i){
        cout << *i << " ";
    }

    cout<<"change contents of vector"<<endl;
    for (auto i = v.begin(); i != v.end(); ++i){
        *i = toupper(*i);
    }

    cout<<"modified contents of vector"<<endl;
    for (auto i = v.begin(); i != v.end(); ++i){
        cout << *i << " ";
    }

    return 0;
}