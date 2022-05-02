#include<iostream>
using namespace std;
template <typename T>
class DynamicQueue {
    T *data;
    int capacity;
    int size;
    int nextIndex;
    int firstIndex;

    public:
    DynamicQueue(int s) {
        data = new T[s];
        capacity = s;
        size = 0;
        nextIndex = 0;
        firstIndex = -1;
    }
    
    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int element) {
        if(size == capacity) {
            T *newdata = new T[2*capacity];
            int j = 0;
            for(int i = firstIndex; i < capacity; i++) {
                newdata[j] = data[i];
                j++;
            }
            for(int i = 0; i < firstIndex; i++) {
                newdata[j] = data[i];
                j++;
            }
            delete[] data;
            data = newdata;
            firstIndex = 0;
            nextIndex = capacity;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex = (1 + nextIndex)%5;
        if(firstIndex == -1) {
            firstIndex = 0;
        }
        size++;
    }
    T front() {
        if(isEmpty()) {
            cout << "STACK IS EMPTY" << endl;
            return 0;
        }
        return data[firstIndex];
    }
    T dequeue() {
        if(isEmpty()) {
            cout << "STACK IS EMPTY" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % 5;
        size--;
        if(size == 0) {
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }
};
int main() {
    DynamicQueue<int> q(5);

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);


	cout << q.front() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	cout << q.getSize() << endl;
	cout << q.isEmpty() << endl;
}