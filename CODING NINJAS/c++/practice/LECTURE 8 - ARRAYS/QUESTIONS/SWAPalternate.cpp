#include<iostream>
using namespace std;
void swapAlternate(int *arr, int size){
    int x=arr[size];
    for(int i=1;i<=size;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    if(size%2!=0){
        arr[size]=x;
    }
    for(int j=1;j<=size;j++){
        cout << arr[j] << " ";
    }
}
int main(){
    int n,size;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> size;
        int a[size];
        for(int i=1;i<=size;i++){
            cin >> a[i];
        }
        swapAlternate(a,size);
    }
}