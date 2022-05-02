#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int j=0;j<=n;j++){
        for(int k=0;k<=n-j;k++){
            if(a[k+1]<a[k]){
                int temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout << a[i] << " ";
    }
}
