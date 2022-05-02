#include<iostream>
using namespace std;
//solution code
int findDuplicate(int *arr, int size){
    int sum = 0;
    int count = 0;
    for(int i = 0;i < size; i++){
        sum += arr[i];
    }
    count = ((size - 1)*(size - 2))/2;
    return sum - count;
}


//main code
int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for(int i = 0;i < size; i++)
        {
            cin >> input[i];
        }

        cout << findDuplicate(input, size) << endl;
    }

    return 0;
}