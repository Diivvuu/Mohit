#include<iostream>
using namespace std;


//solution
bool checkMember(int n){
    int a=0,b=1,c=0;
    if(n==0 || n==1){
        return true;
    }
    for(int i=0;i<=n;i++){
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n){
        return true;
    }
    return false;
}


//main code
int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}
