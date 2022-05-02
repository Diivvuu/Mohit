#include<iostream>
using namespace std;
int main(){
    int n,k,item;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    cout << "Enter the index at which you want to enter the item : " << endl;
    cin >> k;
    cout << "Enter the element :" << endl;
    cin >> item;
    for(int j=n;j>=k;j--){
        a[j+1]=a[j];
    }
    a[k]=item;
    for(int i=1;i<=n+1;i++){
        cout << a[i] << " ";
    }
}