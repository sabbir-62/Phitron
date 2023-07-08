#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> listStack(n);
    vector<int> listQueue(m);

    stack<int> stackStack;
    queue<int> queueQueue;

    for(int i = 0; i < n; i++) {
        cin >> listStack[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> listQueue[i];
    }

     for(int i = 0; i < n; i++) {
        stackStack.push(listStack[i]);
    }

    for(int i = 0; i < m; i++) {
        queueQueue.push(listQueue[i]);
    }

    while(!stackStack.empty() && !queueQueue.empty()) {
        if (stackStack.top() != queueQueue.front()) {
            break;
        }
        else{
            stackStack.pop();
            queueQueue.pop();
        }
    }

    if(stackStack.empty() && queueQueue.empty()) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

