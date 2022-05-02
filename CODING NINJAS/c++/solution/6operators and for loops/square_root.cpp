#include<iostream>
using namespace std;
int main(){
    int n,result=1,i=1;
    cin >> n;
    while (result!=n)
    {
        if(n==i*i){
            cout << i;
            break;
        }
        else if (n>i*i)
        {
            i++;
        }
        else{
            cout << i-1;
            break;
        }
    }
}