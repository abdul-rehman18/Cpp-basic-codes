#include <iostream>
#include <string>
using namespace std;
const int n=2;
struct Student{
    int reg;
    char name[50];
    float cgpa;
    string adm_date;
};
Student* input_data();
void display(Student []);
int main(){
    Student* ptr;
    ptr=input_data();
    return 0;
} 
Student* input_data(){
    Student data[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Registration number of student "<<i+1<<" : ";
        cin>>data[i].reg;
        cin.ignore(99999, '\n');
        cout<<"Enter Name of student "<<i+1<<" : ";
        cin.getline(data[i].name,50);
        cout<<"Enter CGPA of student "<<i+1<<" : ";
        cin>>data[i].cgpa;
        cout<<"Enter Admission date of student "<<i+1<<" : ";
        cin>>data[i].adm_date;
        cout<<"Data of student "<<i+1<<" entered successfully!!";
        cout<<endl;
        cout<<endl;
    }
    cout<<"***********************************************************************"<<endl;
    display(data);
    return 0;
}
void display(Student data[]){
    for(int i=0;i<n;i++){
        cout<<"The Registration number of student "<<i+1<<" is: "<<data[i].reg<<endl;
        cout<<"The Name of student "<<i+1<<" is: "<<data[i].name<<endl;
        cout<<"The CGPA of student "<<i+1<<" is: "<<data[i].cgpa<<endl;
        cout<<"the Admission date of student "<<i+1<<" is: "<<data[i].adm_date<<endl;
        cout<<"***********************************************************************";
        cout<<endl;
    }
}