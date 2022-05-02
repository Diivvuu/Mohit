#include<iostream>
using namespace std;

class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };
int length(Node *head) {
    Node *temp = head;
    int len = 0;
    while(temp != NULL){
        len = len + 1;
        temp = temp -> next;
    }
    return len;
}
Node *takeInput() {
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != - 1) {
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
int main () {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        cout << length(head) << endl;
    }
}
// #include<iostream>
// using namespace std;
// class Node {
//     public : 
//     int data;
//     Node *next;
//     Node(int data) {
//         this -> data = data;
//         next = NULL;
//     }
// };
// int length(Node *head) {
//     Node *temp = head;
//     int len = 0;
//     while(temp != NULL){
//         len = len + 1;
//         temp = temp -> next;
//     }
//     return len;
// }
// Node *takeinput() {
//     int data;
//     cin >> data;
//     Node *head = NULL;
//     Node *tail = NULL;
//     while(data != -1) {
//         Node *newnode = new Node(data);
//         if(head == NULL){
//             head = newnode;
//             tail = newnode;
//         }
//         else {
//             tail -> next = newnode;
//             tail = tail -> next;
//         }
//         cin >> data;
//     }
//     return head;
// }
// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         Node *head = takeinput();
//         cout << length(head) << endl;
//     }
//     return 0;
// }