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
//better method
Node *skipMdeleteN(Node *head,int m,int n){
	if(m == 0){
		return NULL;
	}
	
	Node *curr = head;
	Node *t;
	
	while(curr != NULL){
		for(int i = 1; i < m && curr != NULL; i++){
			curr = curr -> next;
		}
		if(curr == NULL){
			return head;
		}
		t = curr -> next;
		
		for(int i = 0; i < n && t != NULL; i++){
			Node *temp = t;
			t = t -> next;
			free(temp);	//deallocation of given n nodes.
		}
		curr -> next = t;
		curr = t;
	}
	return head;
}
// Node *skipMdeleteN(Node *head, int m, int n) {
//     if(m == 0 || head == NULL) {
//         return NULL;
//     }
//     if(n == 0) {
//         return head;
//     }
//     Node *curr = head;
//     Node *temp = NULL;
//     while(curr != NULL) {
//         int take = 0;
//         int skip = 0;
//         while(curr != NULL && take < m) {
//             if(temp == NULL) {
//                 temp = curr;
//             }
//             else {
//                 temp -> next  = curr;
//                 temp = curr;
//             }
//             curr = curr -> next;
//             temp++;
//         }
//         while(curr != NULL && skip < n) {
//             Node *newNode = curr;
//             delete curr;
//             curr = newNode -> next;
//             skip++;
//         }
//     }
//     if(temp != NULL) {
//         temp -> next = NULL;
//     }
//     return head;
// }
void print(Node *head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        int m, n;
        cin >> m >> n;
        head = skipMdeleteN(head, m, n);
        print(head);
    }
    return 0;
}