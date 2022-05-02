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
    Node *head = NULL, *tail = NULL;
    while(data != -1) {
        Node *newNode = new Node (data);
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
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node *kReverse(Node *head, int k) {
    if(k == 0 || k == 1) {
        return head;
    }    
    Node *curr = head;
    Node *fwd = NULL;
    Node *prev = NULL;

    int count = 0;
    while(count < k && curr != NULL) {
        fwd = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = fwd;
        count++;
    }
    if(fwd != NULL) {
        head -> next = kReverse(fwd, k);
    }
    return prev;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        int k;
        cin >> k;
        head = kReverse(head, k);
        print(head);
    }
}