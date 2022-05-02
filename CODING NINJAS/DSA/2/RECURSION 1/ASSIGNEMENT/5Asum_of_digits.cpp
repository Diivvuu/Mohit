#include<iostream>
using namespace std;
//solution code
int sumOfDigits(int n){
    if(n == 0){
        return 0;
    }
    int sum = n%10;
    return sum + sumOfDigits(n/10);
}
//main code
int main(){
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
}