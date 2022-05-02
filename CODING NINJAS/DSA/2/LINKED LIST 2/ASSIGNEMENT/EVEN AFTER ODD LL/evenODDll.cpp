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
    while(head != NULL) {
    cout << head -> data << " ";
    head = head -> next;
    }
}

Node* evenAfterOdd(Node *head){
	Node *oddHead = NULL;
	Node *oddTail = NULL;
	Node *evenHead = NULL;
	Node *evenTail = NULL;
	
	while(head != NULL){
		if(head -> data % 2 != 0){	//Condition for odd.
			if(oddHead == NULL){
				oddHead = head;
				oddTail = head;
			}else{
				oddTail -> next = head;
				oddTail = head;
			}
			head = head -> next;
		}else{						//Condition for even.
			if(evenHead == NULL){
				evenHead = head;
				evenTail = head;
			}else{
				evenTail -> next = head;
				evenTail = head;
			}
			head = head -> next;
		}
	}
	if(oddHead == NULL && oddTail == NULL){		//For the testcase 2 4 6,here both oddHead and oddTail are NULL.
		return evenHead;
	}
	if(evenHead == NULL && evenTail == NULL){	//For the testcase 1 3 5,here both evenHead and evenTail are NULL.
		return oddHead;
	}
	//For the mixed testcase 1 2 3 4 5 8,we need to place null in oddTail->next and evenTail->next 
  	//to ensure that two linked lists are splitted.
	oddTail -> next = NULL;
	evenTail -> next = NULL;
	oddTail -> next = evenHead;
	return oddHead;
}
int main(){
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        head = evenAfterOdd(head);
        print(head);
    }
    return 0;
}