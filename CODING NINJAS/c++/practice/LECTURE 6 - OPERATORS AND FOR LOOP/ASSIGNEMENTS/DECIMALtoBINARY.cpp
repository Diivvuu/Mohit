#include<iostream>
using namespace std;

int main() {
    int n,i=1,real=0,rem;
    cin >> n;
    while(n!=0){
        rem=n%2;
        real+=rem*i;
        i*=10;
        n/=2;
    }
    cout << real;

}
