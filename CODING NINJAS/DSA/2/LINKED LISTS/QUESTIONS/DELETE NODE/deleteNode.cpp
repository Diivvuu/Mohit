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
    Node *temp = head;
    int count = 0;
    if(head == NULL){
        return head;
    }
    if(i == 0) {
        head = temp -> next;
        delete temp;
        return head;
    }
    while(temp != NULL && count < i - 1) {
        temp = temp -> next;
        count++;
    }
    if(temp == NULL || temp -> next == NULL){
        return head;
    }
    Node *a = temp -> next;
    temp -> next = a -> next;
    delete a;
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
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
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
    return 0;
}