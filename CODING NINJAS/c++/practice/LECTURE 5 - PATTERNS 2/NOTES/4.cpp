#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch=97;
        for(int j=1;j<=n;j++){
            cout << ch++;
        }
        cout << endl;
    }
}