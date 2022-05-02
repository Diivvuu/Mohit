#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class TreeNode {
    public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data) {
        this -> data = data;
    }
    ~TreeNode(){
        for(int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
TreeNode<int> *TakeInputLevelWise(){
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int> (rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0) {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printLevelWise(TreeNode<int> * root){
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>*front = q.front();
        q.pop();
        cout << front -> data << ":";
        for(int i = 0; i < front->children.size(); i++) {
            q.push(front -> children[i]);
            if(front->children.size() - 1 != i) {
                cout << front->children[i]->data << ",";
            } 
            else {
                cout << front->children[i]->data;
            }
        }
        cout << endl;
    }
}
int main(){
    TreeNode<int> *root = TakeInputLevelWise();
    printLevelWise(root);
}