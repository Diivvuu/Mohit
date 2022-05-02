#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum_of_even=0,sum_of_odd=0;
    while(n>0){
        int ans=n%10;
        if(ans%2 == 0){
            sum_of_even+=ans;
        }
        else if(ans%2 != 0){
            sum_of_odd+=ans;
        }
        n/=10;
    }
    cout << sum_of_even << " " << sum_of_odd;
}