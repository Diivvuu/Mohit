#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int i=1;
  while(i<=n){
    int j=1;
    char p=64+i;
    while(j<=i){
      cout << p;
      p++;
      j++;
    }
    i++;
    cout << endl;
  }
  return 0;
}