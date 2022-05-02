#include<iostream>
using namespace std;
int findUnique(int *arr,int size){
  for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
      int count=0;
      if(arr[i]==arr[j]){
        count+=1;
        arr[i]=count;
      }
    }
  }
  for(int i=0;i<size;i++){
  if(arr[i]==2){
    cout << arr[i] << " ";
    }
  }
}
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    cout << findUnique(a,n);
  }
  
}