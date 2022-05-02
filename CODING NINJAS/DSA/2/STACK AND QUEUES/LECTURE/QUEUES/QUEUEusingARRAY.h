#include<iostream>
using namespace std;
template <typename T>

class QueueUsingArray {
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

    public :
    QueueUsingArray(int s) {
        data = new int[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }

    int getSize() {
        return size;
    }
    bool isEmpty() {
        return size == 0;
    }
    //insertion of an element
    void enqueue(T element) {
        if(size == capacity) {
            cout << "Queue is FULL" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (1 + nextIndex) % capacity;
        if(firstIndex == -1) {
            firstIndex = 0;
        }
        size++;
    }
    T front() {
        if(isEmpty ()) {
            cout << "Queue is EMPTY" << endl;
            return 0;
        }
        return data[nextIndex];
    }
    T deque() {
        if(isEmpty()) {
            cout << "Queue is EMPTY" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (1 + firstIndex) % capacity;
        size--;
        if(size == 0) {
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }
};