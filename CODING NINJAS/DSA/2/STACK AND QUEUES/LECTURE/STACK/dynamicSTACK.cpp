#include<iostream>
using namespace std;
class DynamicStack {
    int *data;
    int capacity;
    int nextIndex;

    public :
    DynamicStack() {
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }
    int size() {
        return nextIndex;
    }
    bool isEmpty() {
        return nextIndex == 0;
    }
    void push(int element) {
        if(nextIndex == capacity) {
            int *newdata = new int[capacity * 2];
            for(int i = 0;i < capacity; i++) {
                newdata[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = newdata;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int pop() {
        if(isEmpty()) {
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top() {
        if(isEmpty()) {
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};
int main() {
    DynamicStack s;
    s.push(4);
    s.push(34);
    s.push(12);
    s.push(65);
    s.push(8);
    s.push(0);
    s.push(45);
    s.push(87);
    s.push(54);
    cout << s.top() << endl;
    cout << s.isEmpty() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
}