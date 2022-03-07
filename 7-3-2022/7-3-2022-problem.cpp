#include<iostream>

using namespace std;

class Student{
    public:
        int roll_no;
        string name;
        void printInfo(){
            cout<<"student name: "<<name<<endl<<"roll number: "<<roll_no<<endl;
        }
};

class Test{
    public:
        int subject_marks[5];
        void printInfo(){
            for (int i = 0; i < sizeof(subject_marks)/sizeof(int); i++){
                cout<<"marks of subject - "<<i+1<<" "<<subject_marks[i]<<endl;
            }
        }
};

class Result:public Student, public Test{
    int total=0, percentage=0;
    public:
        void printInfo(){
            for (int i = 0; i < sizeof(subject_marks)/sizeof(int); i++){
                total+=subject_marks[i];
            }
            percentage = (total * 100) / 500;
            cout<<"student name: "<<name<<endl<<"roll number: "<<roll_no<<endl<<"Total marks: "<<total<<endl<<"Percentage: "<<percentage<<endl;
        }
};

int main(){
    Result res1;

    cout<<"enter a name: ";
    string name;
    cin>>name;

    cout<<"enter a roll number: ";
    int roll;
    cin>>roll;
    
    for (int i = 0; i < sizeof(res1.subject_marks)/sizeof(int); i++){
        cout<<"enter the marks of subject "<<i+1<<": ";
        cin>>res1.subject_marks[i];
    }
    

    res1.name = name;
    res1.roll_no = roll;
    res1.printInfo();

    return 0;
}