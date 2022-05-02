#include<iostream>
using namespace std;
//solution code
bool helper(int *arr, int n, int idx, int sum1, int sum2){
    if(idx == n){
        return sum1 == sum2;
    }
    if(arr[idx]%5 == 0){
        sum1 += arr[idx];
    }
    else if(arr[idx]%3 == 0){
        sum2 += arr[idx];
    }
    else{
        return helper(arr, n, idx + 1, sum1 + arr[idx], sum2) or helper(arr, n, idx + 1, sum1, sum2 + arr[idx]);
    }

    return helper(arr, n, idx + 1, sum1, sum2);
}
bool splitArray(int *input, int size){
    helper(input, size, 0, 0, 0);
}


//main code
int main(){

    int size;
    cin >> size;
    int *input = new int[1 + size];

    for(int i = 0;i < size; i++)
        cin >> input[i];
    
    if(splitArray(input, size)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    return 0;
}