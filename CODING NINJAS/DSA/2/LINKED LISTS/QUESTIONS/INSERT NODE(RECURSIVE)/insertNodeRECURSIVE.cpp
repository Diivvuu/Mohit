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

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout <<  endl;
}

Node *insertNode(Node *head, int i, int data) {
    if(head == NULL) {
        if(i == 0) {
            Node *newNode = new Node(data);
            return newNode;
        }
        return head;
    }
    Node *newNode = new Node(data);
    if(i == 0) {
        newNode -> next = head;
        head = newNode;
        return head;
    }
    head -> next = insertNode(head -> next, i - 1, data);
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
int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }
}