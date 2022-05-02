#include<iostream>
using namespace std;
//solution code
int length(char input[]) {
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++){
        len++;
    }
    return len;
}
void pairStar(char input[], int start) {
    //base case
    if(input[start] == '\0' || input[start + 1] == '\0'){
        return;
    }
    pairStar(input, start + 1);
    if(input[start] == input[start + 1]){
        int end = length(input);
        input[end + 1] = '\0';
        int i = end;
        for(;i > start + 1; i--){
            input[i] = input[i - 1];
        }
        input[start + 1] = '*';
    }
}

void pairStar(char input[]) {
    pairStar(input, 0);
}
//main code
int main(){
    char input[100];
    cin.getline(input, 100);
    pairStar(input);
    cout << input << endl;
}