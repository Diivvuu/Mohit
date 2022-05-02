//array is sorted orn not by recursion
#include<iostream>
using namespace std;
bool is_sorted(int a[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(a[0] < a[1]){
        return is_sorted(a + 1, size - 1);
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }
    if(is_sorted(a, n)){
        cout << "true";
    }
    else{
        cout << "false";
    }
}