#include<iostream>
using namespace std;
//solution code
int subs(string input, string output[]) {
    if(input.empty()) {
        output[0] = "";
        return 1;
    }
    string smallString = input.substr(1);
    int smalloutputSize = subs(smallString, output);
    for(int i = 0;i < smalloutputSize; i++) {
        output[i + smalloutputSize] = input[0] + output[i];
    }
    return 2*smalloutputSize;
}

//main code
int main() {
    string input;
    cin >> input;
    string *output = new string[100];
    int count = subs(input, output);
    for(int i = 0;i < count ; i++) {
        cout << output[i] << endl;
    }
}