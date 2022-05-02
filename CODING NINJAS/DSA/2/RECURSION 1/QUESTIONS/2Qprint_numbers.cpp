//print numbers
#include<iostream>
using namespace std;

//solution code
void print(int n){
    if(n == 1){
        cout << 1 << " ";
    }
    else{
        print(n - 1);
        cout << n << " ";
    }
}

//main code
int main(){
    int n;
    cin >> n;
    
    print(n);
}