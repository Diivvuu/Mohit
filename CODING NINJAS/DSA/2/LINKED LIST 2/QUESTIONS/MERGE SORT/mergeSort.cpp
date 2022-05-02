#include<iostream>
using namespace std;
class Node {
    public :
    int data;
    Node *next;

    Node (int data) {
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


void print(Node *head) {
    while(head != NULL){
    cout << head -> data << " ";
    head = head -> next;
    }
}

Node *mid(Node *head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }
    Node *slow = head;
    Node *fast = head -> next;
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

Node *merge(Node *head1, Node*head2) {
    if(head1 == NULL) {
        return head2;
    }
    if(head2 == NULL) {
        return head1;
    }
    Node *head = NULL, *tail = NULL;
    if(head1 -> data < head2 -> data) {
        head = head1;
        tail = head1;
        head1 = head1 -> next;
    }
    else {
        head = head2;
        tail = head2;
        head2 = head2 -> next;
    }
    while(head1 != NULL && head2 != NULL) {
        if(head1 -> data < head2 -> data) {
            tail -> next = head1;
            tail = head1;
            head1 = head1 -> next;
        }
        else {
            tail -> next = head2;
            tail = head2;
            head2 = head2 -> next;
        }
    }
    if(head1 != NULL) {
        tail -> next = head1;
    }
    if(head2 != NULL) {
        tail -> next = head2;
    }
    return head;
}

Node *mergeSort(Node *head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }
    Node *midp = mid(head);
    Node *half1 = head;
    Node *half2 = midp -> next;
    midp -> next = NULL;
    half1 = mergeSort(half1);
    half2 = mergeSort(half2);

    Node *finalNode = merge(half1, half2);
    return finalNode;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        head = mergeSort(head);
        print(head);
    }
    return 0;
}