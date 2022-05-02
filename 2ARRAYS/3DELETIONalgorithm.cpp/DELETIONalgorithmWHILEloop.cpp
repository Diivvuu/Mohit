#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int k;
    cout << "Index at whih you want to delete the element : " << endl;
    cin >> k;
    for(int j=k;j<=n;j++){
        a[j]=a[j+1];
    }
    for(int i=1;i<n;i++){
        cout << a[i] << " ";
    }
}