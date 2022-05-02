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

Node *takeInput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
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
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
}

Node *reverse(Node *head) {
    if(head -> next == NULL) {
        return head;
    }
    Node *smallAns = reverse(head -> next);
    Node *temp = smallAns;
    while (temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = head;
    head -> next = NULL;
    return smallAns;
    
    return smallAns;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        head = reverse(head);
        print(head);
    }
}