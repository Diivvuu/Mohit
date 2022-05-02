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
    while (data!= -1){
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
void printIthNode(Node *head, int pos) {
    int count = 0;
    Node *temp = head;
    while(temp != NULL) {
        if(count == pos) {
            cout << temp -> data;
        }
        temp = temp -> next;
        count++;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--){
        Node *head = takeInput();
        int pos;
        cin >> pos;
        printIthNode(head, pos);
    }
    return 0;
}