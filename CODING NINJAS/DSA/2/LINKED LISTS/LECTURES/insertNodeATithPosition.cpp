#include<iostream>
using namespace std;
class Node {
    public :
    int data;
    Node *next;

    Node(int data){
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
Node *insertNode(Node *head, int i, int data) {
    Node *temp = head;
    Node *newNode = new Node(data);
    int count = 0;
    if(i == 0) {
        newNode -> next = temp;
        head = newNode;
        return head;
    }
    while(head != NULL && count < i - 1) {
        temp = temp -> next;
        count++;
    }
    if(head != NULL){
        Node *a = temp -> next;
        temp -> next = newNode;
        temp -> next -> next = a;
    }
    return head;
}
void print(Node *head){
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        print(head);
        int data, i;
        cin >> i >> data;
        head = insertNode(head, i, data);
        print(head);
    }
}