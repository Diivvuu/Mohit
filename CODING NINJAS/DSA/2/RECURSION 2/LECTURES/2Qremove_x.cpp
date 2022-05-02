#include<iostream>
using namespace std;
//solution code
void removeX(char input[]) {
    if(input[0] == '\0'){
        return ;
    }
    if(input[0] == 'x') {
        int i = 0;
        for(; input[i] != '\0'; i++){
            input[i] = input[i + 1];
        }
        input[i] = input[i + 1];
        return removeX(input);
    }
    return removeX(input + 1);
}

//main code
int main() {
    char str[100];
    cin >> str;
    removeX(str);
    cout << str << endl;
}