#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
//solution code
double geometricSum(int k){
    if(k == 0){
        return 1;
    }
    float product = 1;
    for(int i = 1;i <= k; i++){
        product*=2;
    }
    float term = 1/product;
    return term + geometricSum(k - 1);
}
//main code
int main(){
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;
}