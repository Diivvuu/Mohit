#include<iostream>
using namespace std;
int main(){
    int n,rem;
    long bin=0,i=1;
    cin >> n;
    while(n != 0){
        rem = n%2;
        bin = bin + rem*i;
        i *= 10;
        n /= 2;
    }
    cout << bin;
}