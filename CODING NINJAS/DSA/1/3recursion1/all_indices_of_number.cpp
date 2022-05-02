#include<iostream>
using namespace std;
int allIndexes(int input[], int size, int x, int output[]){
    if(size == 0){
        return 0;
    }
    int count = allIndexes(input, size-1, x, output);
    if(x == input[size-1]){
        output[count] = size-1;
        return count + 1;
    }
    else{
        return count;
    }
}
int main(){
    int n;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }    
    int x;
    cin >> x;
    int *output = new int[n];
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    delete [] input;
    delete [] output;
}
