#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
template<typename T>
class TreeNode {
    public :
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
TreeNode<int>* TakeInputLevelWise() {
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
template <typename T>
class SecondLargestReturnType {
   public:
    TreeNode<T> *largest;
    TreeNode<T> *secondLargest;
    SecondLargestReturnType(TreeNode<T> *first, TreeNode<T> *second) {
        this->largest = first;
        this->secondLargest = second;
    }
};
SecondLargestReturnType<int> *getSecondLargestNodeHelper(TreeNode<int> *root) {
    if (root == NULL) {
        return new SecondLargestReturnType<int>(NULL, NULL);
    }
    SecondLargestReturnType<int> *ans = new SecondLargestReturnType<int>(root, NULL);
    for (int i = 0; i < root->children.size(); i++) {
        SecondLargestReturnType<int> *childAns = getSecondLargestNodeHelper(root->children[i]);
        if (childAns->largest->data > ans->largest->data) {
            if (childAns->secondLargest == NULL) {
                ans->secondLargest = ans->largest;
                ans->largest = childAns->largest;
            } else {
                if (childAns->secondLargest->data > ans->largest->data) {
                    ans->secondLargest = childAns->secondLargest;
                    ans->largest = childAns->largest;
                } else {
                    ans->secondLargest = ans->largest;
                    ans->largest = childAns->largest;
                }
            }
        } else {
            if (ans->largest->data != childAns->largest->data &&
                (ans->secondLargest == NULL || childAns->largest->data > ans->secondLargest->data)) {
                ans->secondLargest = childAns->largest;
            }
        }
    }
    return ans;
}
TreeNode<int> *getSecondLargestNode(TreeNode<int> *root) {
    return getSecondLargestNodeHelper(root)->secondLargest;
}

int main(){
    TreeNode<int>* root = TakeInputLevelWise();
    TreeNode<int>* ans = getSecondLargestNode(root);

    if(ans!=NULL) {
        cout << ans -> data;
    }
    else {
        cout << INT_MIN;
    }
}