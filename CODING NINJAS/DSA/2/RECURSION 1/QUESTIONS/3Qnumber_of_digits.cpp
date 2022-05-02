//number of digits
#include<iostream>
using namespace std;


//solution code
int count(int n){
    if(n == 0){
        return 0;
    }
    return count(n / 10) + 1;
}


//main code
int main(){
    int n;
    cin >> n;
    
    cout << count(n);
}