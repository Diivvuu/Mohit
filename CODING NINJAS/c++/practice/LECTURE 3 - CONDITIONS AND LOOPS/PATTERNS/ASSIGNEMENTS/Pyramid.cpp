#include<iostream>
using namespace std;
int main(){
    int r,k=0;
    cin >> r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout << j+k;
        }
        k+=1;
        cout << endl;
    }
}