#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        count=i;
        for(int k=1;k<=i;k++){
            cout << count++;
        }
        for(int l=2*i-2;l>=i;l--){
            cout << l;
        }
        cout << endl;
    }
}