#include<iostream>
using namespace std;
int findDuplicate(int *a, int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if (a[i]==a[j])
            {
                count+=1;
                a[i]=count;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==2){
            cout <<  a[i] << " ";
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
        cout << findDuplicate(a,n);
    }
}