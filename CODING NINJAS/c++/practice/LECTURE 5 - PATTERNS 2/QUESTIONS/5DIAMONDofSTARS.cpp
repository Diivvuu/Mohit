#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
   
    for(int i=1;i<=(n/2);i++){
        for(int j=1;j<=(n+1)/2-i;j++){
            cout << " ";
        }
        for(int k=1;k<=i;k++){
            cout << "*";
        }
        for(int x=i-1;x>=1;x--){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=(n/2)+1;i>=1;i--){
        for(int j=1;j<=(n+1)/2-i;j++){
            cout << " ";
        }
        for(int k=1;k<=i;k++){
            cout << "*";
        }
        for(int x=i-1;x>=1;x--){
            cout << "*";
        }
        cout << endl;
    }
}