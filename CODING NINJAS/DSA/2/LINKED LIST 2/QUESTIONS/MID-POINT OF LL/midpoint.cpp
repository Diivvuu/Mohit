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

Node *takeinput(){
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

Node *mid(Node *head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }
    Node *fast = head -> next;
    Node *slow = head;
    while(fast != NULL && fast -> next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeinput();
        Node *midPoint = mid(head);
        if(midPoint != NULL) {
            cout << midPoint -> data;
        }
        cout << endl;
    }
    return 0;
}