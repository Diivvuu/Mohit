#include<iostream>
using namespace std;

//solution code
int findUnique(int input[], int size){
    for(int i = 0;i < size;i++){
        int j;
        for(j = 0;j < size;j++){
            if(i != j){
                if(input[i] == input[j]){
                    break;
                }
            }
        }
        if(j == size){
            return input[i];
        }
    }
    return 0;
}


//main code
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for(int i = 0;i < size; ++i)
        {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}