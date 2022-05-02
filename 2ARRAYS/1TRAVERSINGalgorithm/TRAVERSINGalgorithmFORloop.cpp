#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    cout << sum;
}