#include<iostream>
using namespace std;
#include"dynamicArrayClass.cpp"
int main() {
    DynamicArray d1;
    d1.add(1);
    d1.add(2);
    d1.add(3);
    d1.add(4);
    d1.print();
    DynamicArray d2(d1);
    d2.print();

    DynamicArray d3;
    d3 = d1;
    d1.add(0,100);
    d3.print();
    d2.print();
    d1.print();
}