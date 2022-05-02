#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a=0,b=1,c=0;
    if (n==1){
        cout << "1";
    }
    else{
        for(int i=1;b<=n-1;i++){
        c=a+b;
        a=b;
        b=c;
        }
        cout << c;
    }   
}