#include<iostream>
using namespace std;
int main(){
    int choice,n;
    cin >> n;
    cin >> choice;
    if(choice == 1){
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        cout << sum;
    }
    else if(choice == 2){
        int product=1;
        for(int i=1;i<=n;i++){
            product*=i;
        }
        cout << product;
    }
    else{
        cout << "-1";
    }
}