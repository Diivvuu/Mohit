#include<iostream>
using namespace std;
//solution code
int multiplyNumbers(int m, int n){
    if(n == 0){
        return 0;
    }
    return m + multiplyNumbers(m, n - 1);
}
//main code
int main(){
    int n, m;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}