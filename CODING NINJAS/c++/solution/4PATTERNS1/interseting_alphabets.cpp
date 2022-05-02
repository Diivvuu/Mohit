#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char ch;
    for(int i=n;i>=1;i--){
        ch=64;
        for(int j=i;j<=n;j++){
            cout << char(ch+j);
        }
        cout << endl;
    }
}