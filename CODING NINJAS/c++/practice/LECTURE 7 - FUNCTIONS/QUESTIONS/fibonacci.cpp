#include<iostream>
using namespace std;
bool checkMember(int n){
    int a=0,b=1,c=0;
    if(n==0 || n==1){
        return true;
    }
    for(int i=1;i<=n;i++){
        a=b;
        b=c;
        c=a+b;
        if(c==n){
            return true;
        }
        else{
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    cout << checkMember(n);
}

