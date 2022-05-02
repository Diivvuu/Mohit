#include<iostream>
#include "Student.cpp"
using namespace std;
int main(){
    Student s1;
    Student s2;

    s1.age = 24;
    s1.rollNo = 101;

    cout << s1.age << endl;
    cout << s1.rollNo << endl;

    s2.age = 30;
    
    cout << s2.age << endl;

    Student s3, s4, s5;
    Student *s6 = new Student;
    (*s6).age = 23;
    s6 -> rollNo = 104;

    cout << s6->age << endl;
    cout << s6->rollNo << endl;    

}