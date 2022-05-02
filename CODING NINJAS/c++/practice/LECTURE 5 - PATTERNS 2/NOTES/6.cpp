#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=n;i>=1;i--){
        int k=i;
        for(int j=1;j<=n;j++){
            if (k<=n)
            {
                cout << k;
            }
            else
            {
                cout << n;
            }
            k++;
        }
        cout << endl;
    }
}