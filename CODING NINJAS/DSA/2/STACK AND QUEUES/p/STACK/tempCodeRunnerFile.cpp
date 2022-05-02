void reverseQueue(queue<int> &q) {
    if(q.size() == 1) {
        return;
    }
    int top = q.front();
    q.pop();
    reverseQueue(q);
    q.push(top);
}