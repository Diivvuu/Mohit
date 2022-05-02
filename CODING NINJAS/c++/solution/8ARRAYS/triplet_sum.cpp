#include<iostream>
using namespace std;

//solution code
int tripletSum(int *a, int size, int x){
    int tripletCount = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                int total = a[i] + a[j] + a[k];
                if(i < j && j < k){
                    if(total == x){
                        tripletCount++;
                    }
                }
                else{
                    continue;
                }
            }
        }
    }
    return tripletCount;
}


//main code
int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        int x;
        cin >> size;

        int *input = new int [size];
        for(int i = 0; i < size; i++){
            cin >> input[i];
        }
        cin >> x;
        
        cout << tripletSum(input, size, x);

        delete[] input;
    }

    return 0;
}