#include <iostream>
class Node{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
using namespace std;
Node *takeinput(){
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1){
		Node *newnode = new Node(data);
		if (head == NULL){
			head = newnode;
			tail = newnode;
		}
		else{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}
void print(Node *head){
	Node *temp = head;
	while (temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
Node *skipMdeleteN(Node *head, int m, int n) {
    if(head == NULL || m == 0) {
        return head;
    }
    Node *curr = head;
    Node *t;
    while(curr!= NULL){
        for(int i = 1;i < m && curr != NULL; i++) {
        curr = curr -> next;        
        }
        if(curr == NULL){
            return head;
        }
        t = curr -> next;
        for(int i = 0; i < n && t != NULL; i++) {
            Node *a = t;
            t = t -> next;
            free(a);
        }
        curr -> next = t;
        curr = curr -> next;
        }
    return head;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		Node *head = takeinput();
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}