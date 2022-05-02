#include<iostream>
using namespace std;
int main(){
    int n,r,x=0;
    cin >> n;
    while(n!=0){
        r=n%10;
        x=10*x+r;
        n/=10;
    }
    cout << x;
}