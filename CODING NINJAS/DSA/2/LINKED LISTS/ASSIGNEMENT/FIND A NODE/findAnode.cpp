#include<iostream>
using namespace std;
class Node {
    public :
    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        next =NULL;
    }
};

Node *takeInput(){
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

int findNode(Node *head, int val) {
    Node *temp = head;
    int count = 0;
    while(temp != NULL) {
        if(temp -> data == val) {
            return count;
        }
        temp = temp -> next;
        count++;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        int val;
        cin >> val;
        cout << findNode(head, val) << endl;
    }
}