#include<iostream>
using namespace std;
class Node{
    public:
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
    Node *t = head;
    while(t != NULL) {
        cout << t-> data << " ";
        t = t -> next;
    }
    cout << endl;
}
Node *reverse(Node *head) {
    Node *prev = NULL;
    Node *curr = head;
    Node *fwd = NULL;
    while(curr != NULL) {
        fwd = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}
Node *NextLargeNumber(Node *head) {
    head = reverse(head);
    bool f = true;
    Node *curr = head;
    while(curr != NULL && f == true) {
        if(curr -> next == NULL && curr -> data == 9){
            curr -> data = 1;
            Node *t  = new Node(0);
            t -> next = head;
            head = t;
            curr = curr -> next;
        }
        else if(curr -> data == 9) {
            curr -> data = 0;
            curr = curr -> next;
        }
        else {
            curr -> data = curr -> data + 1;
            curr = curr -> next;
            f = false;
        }
    }
    head = reverse(head);
    return head;
}
// Node *reverse(Node *head) {
//     Node *prev = NULL;
//     Node *curr = head;
//     while(curr != NULL) {
//         Node *t = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = t;
//     }
//     return prev;
// }
// Node *NextLargeNumber(Node *head) {
//     head = reverse(head);
//     bool f = true;
//     Node *curr = head;
//     while(curr != NULL && f == true) {
//         if(curr -> next == NULL && curr -> data == 9) {
//             curr -> data = 1;
//             Node *t  = new Node(0);
//             t -> next = head;
//             head = t;
//             curr = curr -> next;
//         }
//         else if(curr -> data == 9) {
//             curr -> data = 0;
//             curr = curr -> next;
//         }
//         else{
//             curr -> data = curr -> data + 1;
//             curr = curr -> next;
//             f = false;
//         }
//     }
//     head = reverse(head);
//     return head;
// }

int main() {
    Node *head = takeInput();
    head = NextLargeNumber(head);
    print(head);
    return 0;
}