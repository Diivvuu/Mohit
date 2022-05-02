#include<iostream>
using namespace std;

//solution code
int duplicateNumber(int arr[], int size){
    int arr1[size];
    for(int i = 0;i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count = count+1;
                arr1[i] = count;
            }
        }
    }
    for(int i = 0; i < size; i++){
        if(arr1[i] == 2){
            cout << arr[i];
        }
    }
}

//main code
int main(){
    
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int [size];

        for(int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout << duplicateNumber(input, size) << endl;
    }

    return 0;
}