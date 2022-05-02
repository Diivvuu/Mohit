#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<int>*> children;
    
    TreeNode(T data){
        this -> data = data;
    }
    ~ TreeNode(){
        for(int i = 0; i < children.size(); i++){
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
    while (pendingNodes.size()!=0){
        TreeNode<int>* front = pendingNodes.front();
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
int getLargeNodeCount(TreeNode<int>* root, int x) {
    queue<TreeNode<int>*> q;
    q.push(root);
    int count = 0;
    while (!q.empty()){
        TreeNode<int>* front = q.front();
        q.pop();
        if(front -> data > x) {
            count = count + 1;
        }
        for(int i = 0; i < front -> children.size(); i++) {
            q.push(front -> children[i]);
        }
    }
    return count;
}
int main(){
    TreeNode<int>*root = TakeInputLevelWise();
    int x;
    cin >> x;
    cout << getLargeNodeCount(root, x);
}