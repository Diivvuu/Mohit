#include<iostream>
using namespace std;
//solution code
void removeX(char input[]){
    if(input[0] == '\0'){
        return;
    }
    if(input[0] == 'x'){
        int i = 1;
        for(;input[i] != '\0'; i++){
            input[i - 1] = input[i];
        }
        input[i - 1] = input[i];
        removeX(input);
    }
    removeX(input + 1);
}
//main code
int main(){
    char input[1000];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}