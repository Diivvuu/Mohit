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
    TreeNode(T data) {
        this -> data = data;
    }
    ~TreeNode(){
        for(int i = 0 ; i < children.size(); i++) {
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
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
template<typename T>
class MaxNodePair{
    public:
    TreeNode<T>* Node;
    int sum;
};
MaxNodePair<int>* maxNodeHelper(TreeNode<int>* root) {
    if(root == NULL) {
        MaxNodePair<int>* Pair = new MaxNodePair<int>();
        Pair -> Node = NULL;
        Pair -> sum = INT_MIN;
        return Pair;
    }
    int sum = root -> data;
    for(int i = 0; i < root -> children.size(); i++) {
        sum += root ->children[i] -> data;
    }
    MaxNodePair<int>* ans = new MaxNodePair<int>();
    ans -> Node = root;
    ans -> sum = sum;
    for(int i = 0; i < root -> children.size(); i++) {
        MaxNodePair<int> *childSum = maxNodeHelper(root -> children[i]);
        if(childSum -> sum > ans -> sum) {
            ans = childSum;
        }
    }
    return ans;
}
TreeNode<int>* maxNode(TreeNode<int>* root) {
    return maxNodeHelper(root) -> Node;
}
int main() {
    TreeNode<int>* root = TakeInputLevelWise();
    TreeNode<int>* ans = maxNode(root);
    if(ans!=NULL) {
        cout << ans -> data;
    }
}