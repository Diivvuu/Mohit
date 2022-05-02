#include<iostream>
using namespace std;
#include"operatorOverloading.cpp"
int main(){
    // Fraction f1(1,2);
    // Fraction f2(3,2);
    // f1.print();
    // f2.print();
    // Fraction f3 = f1.add(f2);
    // f3.print();
    Fraction f1(1, 3);
	Fraction f2(2, 3);
    f1.print();
	f2.print();
    Fraction f3 = f1.add(f2);
	Fraction f4 = f1 + f2;
    Fraction f5 = f1*f2;
	f3.print();
    f4.print();
    f5.print();
    if(f1 == f2) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    Fraction f6 = (f1++)++;
    Fraction f7 = ++(++f2);
    f6.print();
    f7.print();
    f1.print();
    f1.print();
    f1+=f2;
    f1.print();
}