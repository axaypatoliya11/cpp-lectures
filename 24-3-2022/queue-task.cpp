#include <iostream>
#include <queue>
#include <bits/stdc++.h>
 
using namespace std;
 
// Driver Code
int main()
{
    queue<int> Q;
    int len, subset;
    cout<<"enter the size of queue: ";
    cin>>len;
    cout<<endl<<"enter the size of subset: ";
    cin>>subset;
    
    for(int i=0; i<len; i++){
        int elem;
        cout<<"enter the element "<<i+1<<":"<<endl;
        cin>>elem;
        Q.push(elem);
    }
    
    // for(int i=0; i<len; i++){
    //     cout<< Q.front()<<" ";
    //     Q.pop();
    // }
    // cout<<endl;

    // main = 6, sub = 3
    // arr[sub][main/sub]
    
    int subs[len/subset][subset];
    for(int i=0; i<len/subset; i++){
        for(int j=0; j<subset; j++){
            int temp = Q.front();
            subs[i][j] = temp;
            Q.pop();
        }
    }

    for(int i=0; i<len/subset; i++){
        for(int j=0; j<subset; j++){
            cout<<subs[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<len/subset; i++){
        cout<<endl<<"maximum elements are: ";
        cout<<*max_element(subs[i], subs[i]+subset)<<" ";
        cout<<endl<<"minimum elements are: ";
        cout<<*min_element(subs[i], subs[i]+subset)<<" ";
    }
    cout<<endl;


 
    return 0;
}