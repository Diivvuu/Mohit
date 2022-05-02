#include<iostream>
#include<stack>
using namespace std;
void reverseStack(stack<int> &input, stack<int> &extra) {
    if(input.size() < 1) {
        return;
    }
    int last = input.top();
    input.pop();
    reverseStack(input, extra);
    while(!input.empty()) {
        int top = input.top();
        input.pop();
        extra.push(top);
    }
    input.push(last);//dhyaan se
    while(!extra.empty()) {
        int top = extra.top();
        extra.pop();
        input.push(top);
    }
}
int main() {
    stack<int> input, extra;
    int size, val;
    cin >> size;

    for(int i = 0;i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);
    for(int i = 0;i < size; i++) {
        cout << input.top() << " ";
        input.pop();
    }
}