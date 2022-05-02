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
    Node *head = NULL;
    Node *tail = NULL;
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

Node *reverseLL(Node *head) {
    Node *curr = head;
    Node *prev = NULL;
    Node *fwd = NULL;

    while(curr != NULL) {
        fwd = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}

bool isPalindrome(Node *head) {
    if(head == NULL || head -> next == NULL) {
        return true;
    }
    Node *fast = head;
    Node *slow = head;

    while(fast -> next != NULL && fast -> next -> next != NULL) {
        slow = slow -> next;
        fast =  fast -> next -> next;
    }

    Node *secondHead = slow -> next;
    slow -> next = NULL;
    secondHead = reverseLL(secondHead);

    Node *firstSublist = head;
    Node *secondSublist = secondHead;

    while (secondSublist != NULL) {
        if(firstSublist -> data != secondSublist -> data) {
            return false;
        }
        firstSublist = firstSublist -> next;
        secondSublist = secondSublist -> next;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        bool ans = isPalindrome(head);

        if(ans) {
            cout << "true";
        }
        else {
            cout << "false";
        }
        cout << endl;
    }
    return 0;
}