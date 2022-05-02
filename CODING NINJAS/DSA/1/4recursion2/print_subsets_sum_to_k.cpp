#include<iostream>
#include<vector>
using namespace std;
//solution code
void help(int input[], int size, int k, vector<int> ans){
    if(size == 0){
        if(k == 0)
        {
            for(int i:ans)
                cout << i << " ";
            cout << endl;
        }

        return;
    }
    help(input + 1, size - 1, k, ans);
    ans.push_back(input[0]);
    help(input + 1, size - 1, k - input[0], ans);
    return;
}
void printSubsetSumToK(int input[], int length, int k) {
    vector <int> ans;
    help(input, length, k , ans);
}


//main code
int main(){
    int input[1000], length, k;
    cin >> length;
    for(int i = 0;i < length;i++){
        cin >> input[i];
    }
    cin >> k;
    printSubsetSumToK(input, length, k);
}