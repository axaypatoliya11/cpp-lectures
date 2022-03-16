#include <iostream>
#include <fstream>

using namespace std;

class student{
    public:
        int roll;
        char name[25];
        float marks;
        void getdata(){
            cout<<"enter roll no and name: "<<endl;
            cin>>roll>>name;
            cout<<"marks"<<endl;
            cin>>marks; 
        }

        void AddRecord(){
            fstream f;
            student stu;
            f.open("student.dat", ios::app|ios::binary);
            stu.getdata();
            f.write((char*)&stu, sizeof(stu));
            f.close();
        }

        void display(){
            fstream f; 
            student stu;
            f.open("student.dat", ios::in|ios::binary);
            while(!f.eof()){ //this while loop will print all the object present in the file
                f.read((char *)&stu, sizeof(stu));
                cout<<"roll "<<stu.roll<<" Name "<<stu.name<<" Mark: "<<stu.marks<<endl;
            }
            f.close();
        }
};

int main(){
    student s1;
    char ch='n';

    do{
        s1.AddRecord(); //no need to call getdata() because AddRecord() will call getdata()
        cout<<"want to add more?(y/n)"<<endl;
        cin>>ch;
    } while(ch=='y'||ch=='Y');

    s1.display();
    cout<<"updated!!!"<<endl;

    return 0;
}