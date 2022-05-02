#include<iostream>
using namespace std;
//solution code
int countZeros(int n){
    if(n == 0){
        return 1;
    }
    if(n/10 != 0){
        if (n%10 == 0)
        {
            return 1 + countZeros(n/10);
        }
        else
        {
            return countZeros(n/10);
        }
    }
    return 0;
}
//main code
int main(){
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
