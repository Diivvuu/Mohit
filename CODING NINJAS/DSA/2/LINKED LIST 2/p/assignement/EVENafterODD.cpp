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

Node *evenAfterOdd(Node *head) {
    Node *evenHead = NULL, *evenTail = NULL, *oddHead = NULL, *oddTail = NULL;
    while(head != NULL) {
        if(head->data%2 == 0) {
            if(evenHead == NULL) {
                evenHead = head;
                evenTail = head;
            }
            else {
                evenTail->next = head;
                evenTail = evenTail->next;
            }
            head = head -> next;
        }
        else {
            if(oddHead == NULL) {
                oddHead = head;
                oddTail = head;
            }
            else {
                oddTail -> next = head;
                oddTail = oddTail->next;
            }
            head = head -> next;
        }
    }
    if(evenHead == NULL && evenTail == NULL) {
            return oddHead;
        }
        if(oddHead == NULL && oddTail == NULL){
            return evenHead;
        }
        evenTail->next = NULL;
        oddTail->next = evenHead;
        return oddHead;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}