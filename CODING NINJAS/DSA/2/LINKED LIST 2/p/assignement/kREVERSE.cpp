#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node *next;
    Node(int data) {
        this->data=data;
        next=NULL;
    }
};
Node *takeInput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head=newNode;
            tail=newNode;
        }
        else {
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
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
Node *kReverse(Node *head, int k) {
    if(k == 0 || head == NULL) {
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    Node *fwd = NULL;
    int count = 0;
    while(count < k && curr != NULL) {
        fwd = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = fwd;
        count++;
    }
    if(head != NULL) {
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
    return 0;
}