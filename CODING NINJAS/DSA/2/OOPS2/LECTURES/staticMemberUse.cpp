#include<iostream>
using namespace std;
#include"staticMember.cpp"
int main() {
    Student s1;
    Student s2, s3, s4;
    cout << Student :: getTotalStudents() << endl;
    
}