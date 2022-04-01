#include<iostream>
#include<string>

using namespace std;

int main(){
    string inp;
    cout<<"Enter a string: ";
    cin>>inp;
    cout<<endl;
    for(int i=0;i<inp.length();i++){
        if(inp[i]=='0' || inp[i]=='1'){
            cout<<inp[i]<<" ";
        }
    }
    cout<<"length: "<<inp.length()<<endl;

    int count = 0;

    for(int i=0;i<inp.length();i++){
        if(inp[i]=='0' && inp[i+1]=='1'){
            count++;
        }
    }

    if(inp.length()%2==0){

        for(int i=0;i<inp.length();i++){
            string temp = inp;
            if(i%2==0){

                if(i==inp.length()-2){
                    char temp2 = temp[0];
                    temp[0] = temp[i];
                    temp[i] = temp2;
                } 
                else if(i==inp.length()-1){
                    char temp2 = temp[0];
                    temp[0] = temp[i];
                    temp[i] = temp2;
                }
                else{
                    char temp2 = temp[i+2];
                    temp[i+2] = temp[i];
                    temp[i] = temp2;
                }
                cout<<"string after "<<i <<": "<<temp<<endl;
                if(temp[i]=='0' && temp[i+1]=='1'){
                    count++;
                }
            } else{
                if(i==inp.length()-1){
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                }
                else if(i==inp.length()-2){
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                }
                else{
                    char temp2 = temp[i+2];
                    temp[i+2] = temp[i];
                    temp[i] = temp2;
                }
                cout<<"string after "<<i <<": "<<temp<<endl;
                if(temp[i]=='0' && temp[i+1]=='1'){
                    count++;
                }
            }
        }

    }

    else{
        for(int i=0;i<inp.length();i++){
            string temp = inp;
            if(i%2!=0){

                if(i==inp.length()-2){
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                } 
                else if(i==inp.length()-1){
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                }
                else{
                    char temp2 = temp[i+2];
                    temp[i+2] = temp[i];
                    temp[i] = temp2;
                }
                cout<<"string after "<<i <<": "<<temp<<endl;
                if(temp[i]=='0' && temp[i+1]=='1'){
                    count++;
                }
            } else{
                if(i==inp.length()-1){
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                }
                else if(i==inp.length()-2){
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                }
                else{
                    char temp2 = temp[i+2];
                    temp[i+2] = temp[i];
                    temp[i] = temp2;
                }
                cout<<"string after "<<i <<": "<<temp<<endl;
                if(temp[i]=='0' && temp[i+1]=='1'){
                    count++;
                }
            }
        }
    }
    cout<<"count: "<<count<<endl;
    // if(inp.length()%2==0){
    //     cout<<"count: "<<count<<endl;
    // } else{
    //     cout<<"count: "<<count/2<<endl;
    // }

    return 0;
}