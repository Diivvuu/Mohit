#include<iostream>
using namespace std;
int main(){
    int dec=0,rem=0,b=1,n;
    cin >> n;
    while(n != 0){
        rem = n%10;
        dec += rem*b;
        b *= 2; 
        n /= 10;
    }
    cout << dec;
}