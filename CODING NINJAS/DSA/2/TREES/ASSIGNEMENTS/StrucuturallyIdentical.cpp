#include<iostream>
#include<queue>
#include<vector>
#include<climits>
using namespace std;
template<typename T>
class TreeNode {
    public:
    T data;
    vector<TreeNode<int>*> children;
    TreeNode(T data){
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
bool areIdentical(TreeNode<int>* root1, TreeNode<int>* root2) {
    if(root1 == NULL && root2 == NULL) {
        return true;
    }
    if((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)) {
        return false;
    }
    if((root1 -> data != root2 -> data) || (root1 -> children.size() != root2 -> children.size())) {
        return false;
    }
    int i = 0;
    while(i < root1 -> children.size()) {
        TreeNode<int>* child1 = root1 -> children[i];
        TreeNode<int>* child2 = root2 -> children[i];

        if(child1 -> data == child2 -> data) {
            i++;
        }
        else {
            return false;
        }
    }
    return true;
}
int main(){
    TreeNode<int>* root1 = TakeInputLevelWise();
    TreeNode<int>* root2 = TakeInputLevelWise();
    cout << (areIdentical(root1, root2) ? "true" : "false");
}