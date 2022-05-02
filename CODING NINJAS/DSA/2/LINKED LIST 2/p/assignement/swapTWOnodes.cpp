#include<iostream>
using namespace std;
class Node {
    public :
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        next =  NULL;
    }
};
Node *takeInput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail  = tail -> next;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head){
    Node *t = head;
    while(t != NULL) {
        cout << t->data << " ";
        t=t->next;
    }
    cout << endl;
}
Node *swapNodes(Node *head, int i, int j) {
    if(i == j) {
        return head;
    }
    Node *currNode = head, *prev =  NULL;
    Node *firstNode = NULL, *firstNodePrev = NULL, *secondNode = NULL, *secondNodePrev = NULL;
    int pos = 0;
    while (currNode != NULL){
        if(i == pos) {
            firstNodePrev = prev;
            firstNode = currNode;
        }
        if(j == pos) {
            secondNodePrev = prev;
            secondNode = currNode;
        }
        prev = currNode;
        currNode = currNode -> next;
        pos++;
    }
    if(firstNodePrev != NULL) {
        firstNodePrev->next = secondNode;
    }
    else {
        head = secondNode;
    }
    if(secondNodePrev != NULL) {
        secondNodePrev->next = firstNode;
    }
    else{
        head = firstNode;
    }
    Node *t = secondNode->next;
    secondNode->next = firstNode->next;
    firstNode->next = t;
    return head;
}
int main(){
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        int i, j;
        cin >> i >> j;
        head = swapNodes(head, i, j);
        print(head);
    }
    return 0;
}