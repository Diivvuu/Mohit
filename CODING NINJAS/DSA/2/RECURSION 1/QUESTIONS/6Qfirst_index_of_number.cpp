#include<iostream>
using namespace std;


//solution code
int help(int arr[], int size, int x, int count){
    if( size == 0 || size == 1){
        return -1;
    }
    if(arr[0] == x){
        return count;
    }
    count++;
    return help(arr + 1, size - 1, x, count);
}
int firstIndex(int arr[], int size, int x){
    int count = 0;
    return help(arr, size, x, count);
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

    cout << firstIndex(input, n, x) << endl;
}