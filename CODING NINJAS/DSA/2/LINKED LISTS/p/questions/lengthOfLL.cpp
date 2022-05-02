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

Node *takeInput() {
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1) {
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
int length(Node *head) {
    int len = 0;
    Node *t = head;
    while (t != NULL){
        t = t -> next;
        len++;
    }
    return len;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        cout << length(head) << endl;
    }
    return 0;
}