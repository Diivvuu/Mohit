#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};
class Queue{
    Node *head, *tail;
    int size;
    public:
    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    int getSize() {
        return size;
    }
    bool isEmpty() {
        return size == 0;
    }
    int front() {
        if(isEmpty()) {
            return -1;
        }
        return head -> data;
    }
    void enqueue(int element) {
        Node *newNode = new Node(element);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = tail -> next;
        }
        size++;
    }
    int dequeue() {
        if(isEmpty()) {
            return -1;
        }
        int t = head -> data;
        head = head -> next;
        size--;
        return t;
    }
};
int main() {
    Queue q;
    int t;
    cin >> t;
    while(t--) {
        int choice, input;
        cin >> choice;
        switch (choice){
        case 1:
            cin >> input;
            q.enqueue(input);
            break;
        case 2:
            cout << q.dequeue() << "\n";
            break;
        case 3:
            cout << q.front() << "\n";
            break;
        case 4:
            cout << q.getSize() << "\n";
            break;
        case 5:
            cout << ((q.isEmpty()) ? "true\n" : "false\n");
            break;
        }
    }
}