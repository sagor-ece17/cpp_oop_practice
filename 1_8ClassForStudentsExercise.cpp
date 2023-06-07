/*
Write a Class for Student with
1. Roll
2. Name
3. marks in 3 subject

**functions for total marks, grade and required methods
*/
#include<bits/stdc++.h>
using namespace std;

class Student{
    int roll;
    string name;
    int mathMarks, dldMarks, cppMarks;
public:
    Student(int r, string n, int m,int d,int c){
       roll =  r;
       name = n;
       mathMarks = m;
       dldMarks = d;
       cppMarks = c;
    }

    int total(){
        return mathMarks+dldMarks+cppMarks;
    }

    char grade(){
    float average=total()/3;
    if(average > 60)
        return 'A';
    else if(average>=40 && average<60)
        return 'B';
    else
        return 'C';
    }
};

int main(){
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter Roll number of a Student: ";
    cin>>roll;
    cout<<"Enter Name of a Student:";
    cin>>name;
    cout<<"Enter marks in 3 subjects";
    cin>>m>>p>>c;
    Student s(roll,name,m,p,c);
    cout<<"Total Marks: "<<s.total()<<endl;
    cout<<"Grade of Student:"<<s.grade()<<endl;





    return 0;
}