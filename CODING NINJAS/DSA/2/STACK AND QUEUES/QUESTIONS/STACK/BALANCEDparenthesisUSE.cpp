#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isBalanced(string expression) {
    stack<char> s;
    for(int i = 0;i < expression.length(); i++) {
        if(expression[i] == '(') {
            s.push(expression[i]);
        }
        else if(expression[i] == ')') {
            if(s.empty()) {
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