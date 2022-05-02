#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    bool prime=0;
    for(int i=2;i<n;i++){
        prime=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime = 1;
            }
        }
        if(prime==0){
            cout << i << endl;
        }
    }
}