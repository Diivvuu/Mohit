#include<iostream>
using namespace std;
int main(){
    int sum=0,n,i=1;
    cin >> n;
    int arr[n];
    while(i<=n){
        cin >> arr[i];
        sum+=arr[i];
        i+=1;
    }
    cout << sum;
}