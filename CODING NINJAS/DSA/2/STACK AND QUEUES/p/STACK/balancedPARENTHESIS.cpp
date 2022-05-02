#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isBalanced(string input) {
    stack<char> s;
    for(int i = 0;i < input.length(); i++) {
        if(input[i] == '(') {
            s.push(input[i]);
        }
        else if(input[i] == ')') {
            if(s.empty()) { // check this first, or there will be runtime error
                return false;
            }
            if(s.top() == '(') {
                s.pop();
                continue;
            }
        }
    }
    return s.empty();
}
int main() {
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}