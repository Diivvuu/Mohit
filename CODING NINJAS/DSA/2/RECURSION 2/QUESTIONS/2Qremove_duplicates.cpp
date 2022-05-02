#include<iostream>
using namespace std;
//solution code
void removeConsecutiveDuplicates(char input[]){
    if(input[0] == '\0' || input[1] == '\0'){
        return;
    }
    if(input[0] == input[1]){
        int i = 1;
        for(;input[i] != '\0'; i++){
            input[i] = input[i + 1];
        }
        removeConsecutiveDuplicates(input);
    }
    removeConsecutiveDuplicates(input + 1);
}

//main code
int main(){
    char s[1000000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}