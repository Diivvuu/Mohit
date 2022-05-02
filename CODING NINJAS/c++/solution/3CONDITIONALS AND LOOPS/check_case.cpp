#include<iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    if(ch >='A' and ch <= 'Z'){
        cout << "1";
    }
    else if(ch >= 'a' and ch <= 'z'){
        cout << "0";
    }
    else{
        cout << "-1";
    }
}