#include<iostream>
#include<cstring>
using namespace std;
#include"copyConstructor.cpp"
int main(){
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();
    Student s2(s1);
    s2.name[3] = 'e';
    s2.display();
    s1.display();
}