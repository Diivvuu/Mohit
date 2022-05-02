#include<iostream>
using namespace std;
//solution code
bool help(char input[]) {
    if(input[0] == '\0'){
        return true;
    }
    bool check;
    if(input[0] == 'a' && (input[1] == 'a' || input[1] == '\0')){
        check = help(input + 1);
    }
    else if(input[0] == 'a' && input[1] == 'b' && input[2] == 'b'){ 
        check = help(input + 1);
    }
    else if(input[0] == 'b' && input[1] == 'b' && (input[2] == 'a' || input[2] == '\0')){
        check = help(input + 2);
    }
    else{
        return false;
    }
    return check;
}
bool checkAB(char input[]) {
        if(input[0] == '\0') {
            return true;
        }
        if(input[0] == 'a') {
            return help(input);
        }
}
//main code
int main(){
    char input[100];
    bool ans;
    cin >> input;
    ans = checkAB(input);
    if(ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}