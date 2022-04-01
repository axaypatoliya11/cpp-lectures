#include<iostream>
#include<string>
using namespace std;
class charInput{
    string res;    
    public:
        void add(char c) {
            res+=c;
        }
        string getValue() { 
            return res;
        }
};


class numInput : public charInput{
    string res;
    public:
        void add(char c) {
            if(c>='0' && c<='9'){
                res+=c;
            }
        }

        string getValue() { 
            return res;
        }
};


int main(){
    numInput *ci;
    ci = new numInput();
    ci->add('1');
    ci->add('a');
    ci->add('0');
    cout<<ci->getValue()<<endl;
    return 0;
}