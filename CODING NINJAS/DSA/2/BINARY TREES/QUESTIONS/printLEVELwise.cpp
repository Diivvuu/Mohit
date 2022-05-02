#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    
    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int>* currNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int> (leftChild);
            currNode -> left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currNode -> right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}
void printLevelWise(BinaryTreeNode<int>* root) {
    if(!root) {
        return;
    }
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        cout << front -> data << ":";
        if(front -> left) {
            q.push(front -> left);
            cout << "L:" << front -> left -> data;
        }
        else {
            cout << "L:-1";
        }
        cout << ",";
        if(front -> right) {
            q.push(front -> right);
            cout << "R:" << front -> right -> data << endl;        
        }
        else {
            cout << "R:-1" << endl;
        }
    }
}
int main(){
    BinaryTreeNode<int> *root = takeInput();
    printLevelWise(root);
}

