#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=n;i>=1;i--){
        char  ch=64;
        for(int j=i;j<=n;j++){
            cout << char(ch+j);
        }
        cout << endl;
    }
}