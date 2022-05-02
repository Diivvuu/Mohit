#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class TreeNode {
    public:
    T data;
    vector<TreeNode<int>*> children;
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
    while(pendingNodes.size()!=0) {
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
TreeNode<int>* nextLarger(TreeNode<int>* root, int x) {
    if(root == NULL) {
        return NULL;
    }
    TreeNode<int>* max = NULL;
    if(root -> data > x) {
        max = root;
    }
    for(int i = 0; i < root -> children.size(); i++) {
        TreeNode<int>*childMax = nextLarger(root -> children[i], x);
        if(max == NULL) {
            max = childMax;
        }
        else if(childMax -> data > x && childMax -> data < max -> data){
            max = childMax;
        }
    }
    return max;
}
int main(){
    TreeNode<int>* root = TakeInputLevelWise();
    int x;
    cin >> x;
    TreeNode<int>* ans = nextLarger(root, x);
    if(ans != NULL) {
        cout << ans -> data;
    }
}