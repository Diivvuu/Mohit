#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        char ch=64+i;
        for(int j=1;j<=i;j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}