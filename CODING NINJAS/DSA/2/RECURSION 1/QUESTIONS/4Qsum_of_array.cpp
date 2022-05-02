//sum of all the elements of the array
#include<iostream>
using namespace std;

//solution code
int sum(int arr[], int size){
    if(size == 0){
        return 0;
    }
        return arr[0] + sum(arr + 1, size - 1);
}

//main code
int main(){
    int n;
    cin >> n;
    
    int *input = new int[n];
    for(int i = 0; i  <n; i++){
        cin >> input[i];
    }
    cout << sum(input, n) << endl;
}