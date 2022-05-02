#include<iostream>
using namespace std;
#include"complexNumber.cpp"
int main() {
    int r1, i1, r2, i2;
    cin >> r1 >> i1;
    cin >> r2 >> i2;
    ComplexNumber c1(r1, i1);
    ComplexNumber c2(r2, i2);
    int choice;
    cin >> choice;
    if(choice == 1) {
        c1.add(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else{
        return 0;
    }
}