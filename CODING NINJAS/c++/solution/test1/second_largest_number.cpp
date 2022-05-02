#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int second_largest=-pow(2,31);
    for(int i=0;i<n;i++){
        if(a[i] > second_largest && a[i] < max){
            second_largest = a[i];
        }
    }
    cout << second_largest;
}