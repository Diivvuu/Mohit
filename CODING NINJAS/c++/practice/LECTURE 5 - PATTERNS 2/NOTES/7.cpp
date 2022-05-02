#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char ch;
    for(int i=n;i>=1;i--){
        ch=65;
        for(int j=1;j<=i;j++){
            cout << ch++;
        }
        cout << endl;
    }
}