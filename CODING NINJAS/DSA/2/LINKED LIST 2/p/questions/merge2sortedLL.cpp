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
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2) {
    if(head1 == NULL) {
        return head2;
    }
    if(head2 == NULL) {
        return head1;
    }
    Node *newHead = NULL, *newTail = NULL;
    if(head1 -> data <  head2 -> data) {
        newHead = head1;
        newTail = head1;
        head1 = head1 -> next;
    }
    else {
        newHead = head2;
        newTail = head2;
        head2 = head2 -> next;
    }
    while(head1 != NULL && head2 != NULL) {
        if(head1 -> data < head2 -> data) {
            newTail -> next = head1;
            newTail = newTail -> next;
            head1 = head1 -> next;
        }
        else {
            newTail -> next = head2;
            newTail = newTail -> next;
            head2 = head2 -> next;
        }
    }
    if(head1 != NULL) {
        newTail -> next = head1;
    }
    if(head2 != NULL) {
        newTail -> next = head2;
    }
    return newHead;
}
void print(Node *head) {
    Node *t = head;
    while(t != NULL) {
        cout << t -> data << " ";
        t = t -> next;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head1 = takeInput();
        Node *head2 = takeInput();
        Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
        print(head3);
    }
}