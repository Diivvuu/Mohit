//program to check palindrome by recursion
#include<iostream>
using namespace std;
//solution code
int length(char input[]){
    int len = 0;
    for(int i = 0;input[i] != '\0'; i++){
        len++;
    }
    return len;
}
bool help(char input[], int start, int end){
    if(start > end){
        return true;
    }
    if(input[0] == '\0'){
        return true;
    }
    if(input[start] == input[end]){
        return help(input, start + 1, end - 1);
    }
    else{
        return false;
    }
}
bool checkPalindrome(char input[]){
    int start = 0;
    int end = length(input) - 1;
    return help(input, start, end);
}
//main code
int main(){
    char input[50];
    cin >> input;

    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}