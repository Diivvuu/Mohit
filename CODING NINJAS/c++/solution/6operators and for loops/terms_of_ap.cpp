#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1,x=1;
    while(i<=n){
        while(x<=n){
            if(((3*i)+2)%4 != 0){
                cout << (3*i)+2 << " ";
                x++;
            }
            i++;
        }
    }
}