#include<iostream>
#include<climits>
using namespace std;

template<typename T>
class StackUsingArray {
    T *data;
    int capacity;
    int nextIndex;

    public:
    StackUsingArray() {
        data = new T[4];
        capacity = 4;
        nextIndex = 0;
    }
    int size() {
        return nextIndex;
    }
    bool isEmpty() {
        return nextIndex == 0;
    }
    void push(T element) {
        if(capacity == nextIndex) {
            T *newData = new T[2 * capacity];
            for(int i = 0;i < capacity; i++) {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    T pop() {
        if(isEmpty()) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top() {
        if(isEmpty()) {
            cout << "Stack si empty" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }
};
int main() {
    StackUsingArray<char> s;
    s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);


	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;

}