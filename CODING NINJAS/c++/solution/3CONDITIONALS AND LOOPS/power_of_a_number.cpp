#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    int result=1;
    for(int i=1;i<=x;i++){
        result*=n;
    }
    cout << result;
}