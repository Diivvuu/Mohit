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
int length(Node *head) {
    if(head == NULL){
        return 0;
    }
    int len = length(head -> next);
    return len + 1;
}
Node *takeInput() {
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL){
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
int main(){
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        cout << length(head) << endl;
    }
}