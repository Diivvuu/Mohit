#include<iostream>
using namespace std;
//solution code
int length(char input[]) {
    if(input[0] == '\0'){
        return 0;
    }
    int smallStirngLength = length(input + 1);
    return smallStirngLength + 1;
}

//main code
int main(){
    char str[100];
    cin >> str;
    int l = length(str);
    cout << l << endl;
}