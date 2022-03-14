#include<iostream>

using namespace std;

int main(){
    int n1, n2;
    cout<<"enter the number 1: ";
    cin>>n1;
    cout<<"\nenter the number 1: ";
    cin>>n2;
    try
    {
        if (n1!=n2)
        {
            float div = (float)n1/n2;
            if (div<0)
            {
                throw 'z';
            }
            cout<<"division = "<<div<<endl;
            
        }  
        else{
            throw n1;
        }
        
    }
    catch(int x)
    {
        cout<<"numbers are equal!"<<endl;
    }

    catch(char k)
    {
        cout<<"divivsion is less than 0"<<endl;
    }
    
    catch(...)
    {
        cout<<"unknown exception"<<endl;
    }


    return 0;
}