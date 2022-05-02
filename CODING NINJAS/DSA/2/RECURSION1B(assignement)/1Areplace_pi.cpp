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
void replacePi(char input[], int start){
    if(input[start] == '\0' || input[start + 1] == '\0'){
        return;
    }
    replacePi(input, start + 1);
    if(input[start] == 'p' && input[start + 1] == 'i'){
        int end = length(input);
        input[end + 2] = '\0';
        for(int i = end - 1 ; i >= start + 2; i--){
            input[i + 2] = input[i];
        }
        input[start] = '3';
        input[start + 1] = '.';
        input[start + 2] = '1';
        input[start + 3] = '4';
    }
}
void replacePi(char input[]){
    replacePi(input, 0);
}


//main code
int main(){
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}