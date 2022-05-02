#include<iostream>
using namespace std;
int main(){
    int i=0,result=1,x,n;
    cin >> x >> n;
    while(i<n){
        result=result*x;
        i+=1;
    }
    cout << result;
}