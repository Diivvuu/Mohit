#include<iostream>
using namespace std;
//solution code
int findUnique(int *input, int n){
    int ans = 0;
    for(int i = 0;i < n; i++){
        ans ^= input[i];
    }
    return ans;
}

//main code
int main(){
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];
    
        for(int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}