#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};
class Pair {
    public :
        Node *head;
        Node *tail;
};
Pair reverseLL(Node *head) {
	if(head == NULL || head -> next == NULL) {
		Pair ans;
		ans.head = head;
		ans.tail = head;
		return ans;
	}

	Pair smallAns = reverseLL(head -> next);

	smallAns.tail -> next = head;
	head -> next = NULL;
	Pair ans;
	ans.head = smallAns.head;
	ans.tail = head;
	return ans;
}
Node *reverse(Node *head) {
    return reverseLL(head).head;
}
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
    while(head != NULL ) {
        cout << head -> data << " ";
        head = head -> next;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        head = reverse(head);
        print(head);
    }
}
// class Pair {
// 	public :
		
// 			Node *head;
// 			Node *tail;
// };

// Pair reverseLL_2(Node *head) {
// 	if(head == NULL || head -> next == NULL) {
// 		Pair ans;
// 		ans.head = head;
// 		ans.tail = head;
// 		return ans;
// 	}

// 	Pair smallAns = reverseLL_2(head -> next);

// 	smallAns.tail -> next = head;
// 	head -> next = NULL;
// 	Pair ans;
// 	ans.head = smallAns.head;
// 	ans.tail = head;
// 	return ans;
// }

// Node* reverseLL_Better(Node *head) {
// 	return reverseLL_2(head).head;
// }