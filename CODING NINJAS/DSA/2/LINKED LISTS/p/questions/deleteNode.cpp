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
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
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

Node *deleteNode(Node *head, int pos) {
    Node *t = head;
    int count = 0;
    if(head == NULL) {
        return head;
    }
    if(pos == 0) {
        head = t -> next;
        delete t;
        return head; 
    }
    while (t != NULL && count < pos - 1) {
        t = t -> next;
        count++;
    }
    if(t == NULL || t -> next == NULL){
        return head;
    }
    Node *a = t -> next;
    t -> next = t -> next -> next;
    delete a;
    return head;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	}

	return 0;
}
