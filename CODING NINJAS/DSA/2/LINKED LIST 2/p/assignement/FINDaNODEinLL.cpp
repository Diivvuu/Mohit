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
    Node *t = head;
    while(t != NULL) {
        cout << t -> data << " ";
        t = t -> next;
    }
    cout << endl;
}
int findANode(Node *head, int val, int pos) {
    if(head == NULL) {
        return -1;
    }
    if(head -> data == val) {
        return pos;
    }
    head = head -> next;
    pos++;
    return findANode(head, val, pos);
}
int findANode(Node *head, int val) {
    return findANode(head, val, 0);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        int val;
        cin >> val;
        cout << findANode(head, val) << endl;
    }
}