#include<iostream>
#include<queue>
using namespace std;
void reverseQueue(queue<int> &input) {
    if(input.size() == 0 || input.size() == 1) {
        return ;
    }
    int t = input.front();
    input.pop();
    reverseQueue(input);
    input.push(t);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        queue<int> q;
        int size, val;
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