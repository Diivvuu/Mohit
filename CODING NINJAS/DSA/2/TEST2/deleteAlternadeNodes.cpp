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
Node *takeInput(){
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data!=-1){
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head) {
    Node *t = head;
    while(t != NULL) {
        cout << t->data << " ";
        t = t-> next;
    }
    cout << endl;
}
void deleteAlternadeNodes(Node *head) {
    Node *curr=head;
    while(curr!=NULL && curr->next!=NULL) {
        Node *t = curr->next;
        curr->next=curr->next->next;
        t->next=NULL;
        delete t;
        curr=curr->next;
    }
}
int main() {
    Node *head = takeInput();
    deleteAlternadeNodes(head);
    print(head);
    delete head;
    return 0;
}