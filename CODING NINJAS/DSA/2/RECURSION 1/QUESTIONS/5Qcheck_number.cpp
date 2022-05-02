//checkk if number is present in array or not
#include<iostream>
using namespace std;


//solution code
bool checkNumber(int arr[], int size, int x){
    if(size == 0 || size == 1){
        return false;
    }
    if(arr[0] == x){
        return true;
    }
    return checkNumber(arr + 1, size - 1, x);
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

    if(checkNumber(input, n, x)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}