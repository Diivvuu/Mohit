#include <iostream>
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
using namespace std;
Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}
void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int length(Node *head) {
    Node *t=  head;
    int size = 0;
    while(t != NULL) {
        t = t -> next;
        size++;
    }
    return size;
}
Node *bubbleSort(Node *head) {
    for(int i = 0;i < length(head); i++) {
        Node *prev = NULL, *curr = head;
        while(curr->next != NULL) {
            if(curr->data > curr->next->data) {
                if(prev!=NULL) {
                    Node *t = curr->next->next;
                    curr->next->next = curr;
                    curr->next=t;
                    prev=prev->next;
                }
                else{
                    head = curr -> next;
                    curr->next = curr->next->next;
                    head -> next = curr;
                    prev = head;
                }
            }
			else {
				prev = curr;
				curr = curr-> next;
			}
        }
    }
	return head;
}
int main()
{   
	int t;
	cin >> t;
	while(t--){
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
	}
}