#include<iostream>
using namespace std;
int main(){
    int n,i=1,bin=0,rem;
    cin >> n;
    while(n!=0){
        rem=n%2;
        bin=bin+rem*i;
        i*=10;
        n/=2;
    }
    cout << bin;
}
/*#include<iostream>
using namespace std;
int main(){
    int b=1,dec=0,rem,n;
    cin >> n;
    while(n!=0){
        rem=n%10;
        dec+=rem*b;
        b*=2;
        n/=10;
    }
    cout << dec;
}*/