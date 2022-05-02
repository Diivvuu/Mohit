#include<iostream>
using namespace std;
int main(){
    int n,x,rem,res=0;
    cin >> n;
    while(n!=0){
        rem = n%10;
        res = (res*10) + rem;
        n /= 10;
    }
    cout << res;
}