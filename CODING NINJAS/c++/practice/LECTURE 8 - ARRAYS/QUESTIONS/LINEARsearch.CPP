#include<iostream>
using namespace std;
int linearSearch(int *arr, int n, int x){
        int j=1;
        while(j<=n){
            if(arr[j]==x){
                return j;
            }
            else{
                j+=1;
            }
        }
        return -1;
}
int main(){
    int n,x;
    cin >> n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    cout << "Enter the element to search : " << endl;
    cin >> x;
    cout << linearSearch(arr,n,x);
}