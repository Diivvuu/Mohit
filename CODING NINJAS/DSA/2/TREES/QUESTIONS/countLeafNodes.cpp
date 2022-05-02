#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class TreeNode {
    public :
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
TreeNode<int>* TakeInputLevelWise(){
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size()!=0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int> (childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
int getLeafNodeCount(TreeNode<int>* root) {
    if(root == NULL){
        return 0;
    }
    if(root -> children.size() == 0) {
        return 1;
    }
    int count = 0;
    for(int i = 0; i < root->children.size(); i++) {
        count = count + getLeafNodeCount(root -> children[i]);
    }
    return count;
}
int main() {
    TreeNode<int> *root = TakeInputLevelWise();
    cout << getLeafNodeCount(root);
}