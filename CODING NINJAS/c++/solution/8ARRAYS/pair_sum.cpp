#include<iostream>
using namespace std;
//solution code
int pairSum(int *a, int size, int x){
    int pairCount = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int total = a[i] + a[j];
            if(a[i] < a[j]){
                if(total == x){
                    pairCount++;
                }
            }
            else{
                continue;
            }
        }
    }
    return pairCount;
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
        int *input = new int[size];

        for(int i = 0; i < size; i++){
            cin >> input[i];
        }

        cin >> x;

        cout << pairSum(input, size, x) << endl;

        delete[] input; 
    }
}