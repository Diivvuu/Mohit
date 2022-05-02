//power
#include<iostream>
using namespace std;

//main code
int power(int n, int x){
    if(x == 0){
        return 1;
    }
    return n*power(n, x - 1);
}

//solution code
int main(){
    int x, n;
    cin >> x >> n;
    cout << power(x, n);
}