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
    while(data != -1)  {
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

Node *removeDuplicates(Node *head) {
    if(head == NULL) {
        return head;
    }
    Node *currhead = head;
    while(currhead -> next != NULL) {
        if(currhead -> data == currhead -> next -> data) {
            currhead -> next = currhead -> next -> next;   
        }
        else {
            currhead = currhead -> next;
        }
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
} 

int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        head = removeDuplicates(head);
        print(head);
    }
    return 0;
}