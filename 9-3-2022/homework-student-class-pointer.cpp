#include<iostream>

using namespace std;

class student{
    int marks;
    string name;
    public:
        int rollno;
        void getData(int m, string n, int r){
            marks = m;
            name = n;
            rollno = r;
        }
        void printData(){
            cout<<"marks: "<<marks<<endl<<"name: "<<name<<endl<<"roll number: "<<rollno<<endl;
        }
};


int main(){
    student stu[3], *st;
    st = &stu[0];
    for (int i = 0; i < 3; i++)
    {   
        int mar;
        string name;
        int roll;
        cout<<"\nenter the marks for student - "<<i+1<<":";
        cin>>mar;
        cout<<"\nenter the name for student - "<<i+1<<":";
        cin>>name;
        cout<<"\nenter the roll number for student - "<<i+1<<":";
        cin>>roll;
        st->getData(mar, name, roll);
        st++;
    }

    st = &stu[0];
    for (int i = 0; i < 3; i++)
    {
        st->printData();
        st++;
    }
    
    
    return 0;
}