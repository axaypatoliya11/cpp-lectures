#include <iostream>
#include <map>
#include <string.h>

using namespace std;

class name{
    char str[40];
    public:
        name(){
            strcpy(str, "");
        }
        name(char *s){
            strcpy(str, s);
        }
        char *get(){
            return str;
        }
};

bool operator<(name a, name b){
    return strcmp(a.get(), b.get())<<0; //true or false
}

class phoneNum{
    char str[80];
    public:
        phoneNum(){
            strcpy(str, "");
        }
        phoneNum(char *s){
            strcpy(str, s);
        }
        char *get(){
            return str;
        }
};

int main(){
    map<name, phoneNum> directory;

    directory.insert(pair<name, phoneNum>(name("emp1"), phoneNum("555-111")));
    directory.insert(pair<name, phoneNum>(name("emp2"), phoneNum("666-222")));
    directory.insert(pair<name, phoneNum>(name("emp3"), phoneNum("777-333")));

    char str[80];
    cout<<"enter a name: ";
    cin>>str;
    map<name, phoneNum>::iterator p;
    p = directory.find(name(str));

    if(p!=directory.end()){
        cout<<"phone number: "<<p->second.get()<<endl;
    }

    return 0;
}