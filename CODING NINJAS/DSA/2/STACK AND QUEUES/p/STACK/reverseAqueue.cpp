#include<iostream>
#include<queue>
using namespace std;
void reverseQueue(queue<int> &q) {
    if(q.size() == 1) {
        return;
    }
    int top = q.front();
    q.pop();
    reverseQueue(q);
    q.push(top);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        queue<int> q;
        int val, size;
        cin >> size;

        for(int i = 0; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while(!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
}