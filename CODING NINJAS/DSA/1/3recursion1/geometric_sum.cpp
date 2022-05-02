#include<iostream>
using namespace std;
double geometricSum(int n){
    if(n == 0){
        return 1;
    }
    int i=1;
    float product=1;
    while(i<=n){
        product*=2;
        i++;
    }
    float term = 1/(product);
    return term+geometricSum(n-1);
}
int main(){
    int k;
    cin >> k;
    cout << geometricSum(k) << endl;
}