#include<iostream>
#include<stack>
#include<string>
using namespace std;

int *stockSpan(int *price, int size) {
    stack<int> s;
    int *output = new int[size];
    for(int i = 0;i < size; i++) {
        while (!s.empty() && price[s.top()] < price[i]){
            s.pop();
        }
        if(s.empty()) {
            output[i] = i + 1;
        }
        else {
            output[i] = i - s.top();
        }
        s.push(i);
    }
    return output;
}

int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for(int i = 0;i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for(int i = 0;i < size; i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    delete[] input;
    delete[] output;
}