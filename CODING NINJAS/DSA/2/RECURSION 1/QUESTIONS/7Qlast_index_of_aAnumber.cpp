#include<iostream>
using namespace std;
//solution code
int lastIndex(int arr[], int size, int x){
    if(size == 0 || size == 1){
        return -1;
    }
    if(arr[size] == x){
        return size;
    }
    return lastIndex(arr, size - 1, x);
}


//main code
int main(){
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++){
        cin >> input[i];
    }

    int x;

    cin >> x;

    cout << lastIndex(input, n, x) << endl;
}