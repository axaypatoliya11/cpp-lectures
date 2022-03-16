#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string ID;
    string student_name;
    string branch;
    string location;

    string temp;
    string return_res;

    fstream file;

    file.open("sample.txt", ios::app|ios::in);

    cout<<"enter 1 to add a new student"<<endl<<"enter 2 to find a student with ID"<<endl<<"enter the input: ";
    int option;
    cin>>option;
    if(option==1){
        cout<<endl<<"enter the ID: ";
        cin>>ID;

        cout<<endl<<"enter the student name: ";
        cin>>student_name;

        cout<<endl<<"enter the branch: ";
        cin>>branch;

        cout<<endl<<"enter the location: ";
        cin>>location;

        string whole_line = ID + " " + student_name + " " + branch + " " + location;
        cout<<"data added: "<<whole_line<<endl;

        file << whole_line << endl;
    } else{
        cout<<"enter the ID: ";
        cin>>ID;

        while(!file.eof()) {
            file>>temp;
            if(temp==ID){
                getline(file, return_res); //this will copies the content(line by line) of file to a temp variable
            }
        }
        cout<<"\nresult: "<<return_res<<endl;
    }
    return 0;
}