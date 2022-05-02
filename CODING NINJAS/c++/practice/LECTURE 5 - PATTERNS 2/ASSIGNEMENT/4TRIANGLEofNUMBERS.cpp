#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        p=i;
        for(int k=1;k<=i;k++){
            cout << p++;
        }
        for(int x=2*i-2;x>=i;x--){
            cout << x;
        }
        cout << endl;
    }
}