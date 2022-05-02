#include<iostream>
using namespace std;
int length(char input[]){
    int len=0;
    for(int i=0;input[i]!='\0';i++){
        len++;
    }
    return len;
}
bool checkPalindrome(char input[], int start, int end){
    if(start > end){
        return true;
    }
    if(input[0] == '\0'){
        return true;
    }
    if(input[start] == input[end]){
        return checkPalindrome(input, start+1, end-1);
    }
    else{
        return false;
    }
}
bool checkPalindrome(char input[]){
    int start=0;
    int end=length(input)-1;
    return checkPalindrome(input, start, end);
}
int main(){
    char input[50];
    cin >> input;
    if(checkPalindrome(input)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}