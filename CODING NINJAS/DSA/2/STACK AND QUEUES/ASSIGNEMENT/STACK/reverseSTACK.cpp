#include<iostream>
#include<stack>
using namespace std;
voif reverseStack(stack <int>)
int main() {
    stack<int> input, extra;
    int size, val;
    cin >> size;
    for(int i = 0;i < size; i++) {
        cin >> val;
        input.push(val);
    }
    reverseStack(input, extra);
    while(!input.empty()){
        cout << input.top() << " ";
        input.pop();
    }
}