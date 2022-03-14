#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

void student::assingnDetails(int id, char pName[]){
  studentId = id;
  strcpy(name,pname);
}

// Assign studentId and name
void Student::display(){
    cout<<"Student Id: " <<studentId;
    cout<<endl;
    cout<<"Student name : " <<name;
}
  

