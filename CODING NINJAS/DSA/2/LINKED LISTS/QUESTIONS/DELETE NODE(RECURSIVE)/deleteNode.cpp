#include<iostream>
using namespace std;

class Node {
    public :
    int data;
    Node *next;
     
    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};

Node *deleteNode(Node *head, int i) {
    if(head == NULL) {
        return head;
    }
    if(i == 0) {
        Node *temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    head -> next = deleteNode(head -> next, i - 1);
    return head;
}

Node *takeInput() {
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
   }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        int pos;
        cin >> pos;
        head = deleteNode(head, pos);
        print(head);
    }
}