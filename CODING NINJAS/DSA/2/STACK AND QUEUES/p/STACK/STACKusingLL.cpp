#include<iostream>
using namespace std;
template<typename T>
class Node {
    public :
    T data;
    Node<T> *next;
    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};
template<typename T>
class Stack {
    Node <T> *head;
    int size;
    public:
    Stack() {
        head = NULL;
        size = 0;
    } 
    int getSize() {
        return size;
    }
    bool isEmpty() {
        return size == 0;
    }
    void push(T element) {
        Node<T> *newNode = new Node<T>(element);
        newNode -> next = head;
        head = newNode;
        size++;        
    }
    T pop(){
        if(isEmpty()) {
            return -1 ;
        }
        T ans = head -> data;
        Node<T> *t = head;
        head = head -> next;
        delete t;
        size--;
        return ans;
    }
    T top() {
        if(isEmpty()) {
            return -1;
        }
        return head -> data;
    }
};
int main() {
    Stack<int> st;
    int q;
    cin >> q;
    while(q--) {
        int choice, input;
        cin >> choice;
        switch (choice){
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.getSize() << "\n";
                break;
            case 5:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}