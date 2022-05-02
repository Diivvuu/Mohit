#include<iostream>
using namespace std;
int main(){
    int n,item,k,i=1;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int a[n];
    while(i<=n){
        cin >> a[i]; 
        i+=1;
    }
    cout << "Enter the index at which you want to enter the element : " << endl;
    cin >> k;
    cout << "ITEM :" << endl;
    cin >> item;
    int j=n;
    while(j>=k){
        a[j+1]=a[j];
        j-=1;
    }
    a[k]=item;
    i=1;
    while(i<=n+1){
        cout << a[i] << " ";
        i+=1;
    }
    return 0;
}