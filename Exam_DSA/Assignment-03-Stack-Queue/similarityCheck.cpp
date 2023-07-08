#include<bits/stdc++.h>
using namespace std;

class Stack {
public:
    vector<int> stack;

    void push(int val) {
        stack.push_back(val);
    }

    int pop() {
        if (!is_empty()) {
            int val = stack.back();
            stack.pop_back();
            return val;
        }
        return false;
    }

    bool is_empty() {
        return stack.empty();
    }
};

class Queue {
public:
    vector<int> queue;

    void enqueue(int val) {
        queue.push_back(val);
    }

    int dequeue() {
        if (!is_empty()) {
            int val = queue.front();
            queue.erase(queue.begin());
            return val;
        }
        return false;
    }

    bool is_empty() {
        return queue.empty();
    }
};

int main() {
    int n, m;
    Stack stack;
    Queue queue;

    cin >> n >> m;

    vector<int> listStack(n);
    vector<int> listQueue(m);

    for (int i = 0; i < n; i++) {
        cin >> listStack[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> listQueue[i];
    }

    for (int i = 0; i < n; i++) {
        stack.push(listStack[i]);
    }

    for (int i = 0; i < m; i++) {
        queue.enqueue(listQueue[i]);
    }

    while (!stack.is_empty() && !queue.is_empty()) {
        if (stack.pop() != queue.dequeue()) {
            break;
        }
    }

    if (stack.is_empty() && queue.is_empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
