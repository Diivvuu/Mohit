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
    while(data != -1 ){
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
Node *evenOdd(Node *head) {
    Node *oddHead = NULL;
    Node *oddTail = NULL;
    Node *evenHead = NULL;
    Node *evenTail = NULL;
    while(head != NULL) {
        if(head -> data % 2 != 0) {
            if(oddHead == NULL) {
                oddHead = head;
                oddTail = head;
            }
            else {
                oddTail -> next = head;
                oddTail = head;
            }
            head = head -> next;
        }
        else {
            if(evenHead == NULL) {
                evenHead = head;
                evenTail = head;
            }
            else {
                evenTail -> next = head;
                evenTail = head;
            }
            head = head -> next;
        }
    }
    if(oddHead == NULL && oddTail == NULL) {
        return evenHead;
    }
    if(evenHead == NULL && evenTail == NULL) {
        return oddHead;
    }
    oddTail -> next = NULL;
    evenTail -> next = NULL;
    oddTail -> next = evenHead;
    return oddHead;
}
void print(Node *head) {
    Node *temp = head;
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        head = evenOdd(head);
        print(head);
    }
}