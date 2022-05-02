#include<iostream>
using namespace std;
int main(){
    int n,choice,sum=0,product=1;
    cin >> n >> choice;
    if(choice==1){
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        cout << sum;
    }
    else if (choice==2)
    {
        for(int i=1;i<=n;i++){
            product*=i;
        }
        cout << product;
    }
    else{
        cout << "-1";
    }
    return 0;
}