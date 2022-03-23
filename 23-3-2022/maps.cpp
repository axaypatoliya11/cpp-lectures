#include <iostream>
#include <map>

using namespace std;
  
int main(){
    map<char, int> m;
    for(int i=0; i<26; i++){
        m.insert(pair<char, int>('A'+i, 65+i));
    }

    char ch;
    cout<<"enter key(an uppercase letter): ";
    cin>>ch;
    map<char, int>::iterator p;

    // find the value given key
    p = m.find(ch);

    if(p!=m.end()){
        cout<<"its ASCII value is: "<<p->second;
    } else{
        cout<<"key not in map"<<endl;
    }

    return 0;

    return 0;
}