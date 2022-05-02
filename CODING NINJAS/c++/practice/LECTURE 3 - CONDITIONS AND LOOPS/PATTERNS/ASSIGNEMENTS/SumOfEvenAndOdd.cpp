#include<iostream>
using namespace std;
int main(){
    int x,n,sum_of_even=0,sum_of_odd=0;
    cin >> n;
    while (n>0)
    {
        x=n%10;
        if(x%2==0){
            sum_of_even+=x;
        }
        else
        {
            sum_of_odd+=x;
        }
        n=int(n/10);
    }
    cout << sum_of_odd << " " << sum_of_even;  
}