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
        cin >>  data;
    }
    return head;
}

// void print(Node *head) {
//     Node *temp = head;
//     while(temp != NULL) {
//         cout << temp -> data << " ";
//         temp = temp -> next;        
//     }
// }

void printReverse(Node *head) {
    if(head == NULL) {
        return;
    }
    printReverse(head -> next);
    cout << head -> data << " ";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        // print(head);
        printReverse(head);
    }
    return 0;
}