#include<iostream>
using namespace std;
int main(){
    int i,j;
    cin >> i;
    while (i>=1)
    {
        j=1; 
        while(j<=4){
       if(j<=i){
            cout << j;
        } 
        else{
            cout << "*";
        }
        j+=1;
    }
    while (j>=1)
    {
        if(j<=i){
            cout << j;
        }
        else{
            cout << "*";
        }
        j-=1;
    }
    i-=1;
    cout << endl;
    }
}