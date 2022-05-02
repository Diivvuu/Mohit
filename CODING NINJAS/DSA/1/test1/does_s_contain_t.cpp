#include<iostream>
#include<cstring>
using namespace std;
//soluiton code
#include<cstring>
using namespace std;
bool isSubsequence(char large[], char small[], int n, int m){
    if(m == 0){
        return true;
    }
    if(n == 0){
        return false;
    }
    if(large[n - 1] == small[m - 1]){
        return isSubsequence(large, small, n - 1, m - 1);
    }
    return isSubsequence(large, small, n - 1, m);
}
bool checksequenece(char large[], char*small){
    int n = strlen(large);
    int m = strlen(small);
    bool ans = isSubsequence(large, small , n, m);
    return ans;
}


//main code
int main(){
    char large[10000];
    char small[10000];
    cin >> large;
    cin >> small;
    bool x = checkSequenece(large, small);
    if(x)
        cout << "true";
    else
        cout << "false";
}