#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    char str[] = "I love c++ programming";
    vector<char> v, v2(30);

    for(int i=0; str[i]; i++){
        v.push_back(str[i]);
    }

    cout<<"Input sequence: "<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;

    // remove all spaces
    // remove_copy(v.begin(), v.end(), v2.begin(), ' '); //copied contents of v to v2 except the character inside ' '(last argument)
    replace_copy(v.begin(), v.end(), v2.begin(), 'a', '-'); //a will be replaced by -. and copied contents of v to v2

    cout<<"Result after removing spaces: "<<endl;

    for(int i=0; i<v2.size(); i++){
        cout<<v2[i];    
    }
    cout<<endl<<endl;

    return 0;
}