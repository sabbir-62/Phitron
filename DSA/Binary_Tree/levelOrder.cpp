#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_tree() {
    int data;
    cin >> data;

    if (data == -1)
        {
            return NULL;
        }

    Node* root = new Node(data);

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        int left, right;
        cin >> left >> right;

        if (left != -1) {
            f->left = new Node(left);
            q.push(f->left);
        }
        if (right != -1) {
            f->right = new Node(right);
            q.push(f->right);
        }
    }

    return root;
}


void level_order(Node* root, int level) {
    if (root == NULL) {
        cout << "Invalid";
        return;
    }

    queue<Node*> q;
    q.push(root);

    int currentLevel = 0;
    bool foundLevel = false;

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; ++i) {
            Node* f = q.front();
            q.pop();

            if (currentLevel == level) {
                cout << f->data << " ";
                foundLevel = true;
            }

            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }

        if (foundLevel)
            return;

        currentLevel++;
    }

    cout << "Invalid";
}

int main() {
    Node* root = input_tree();

    int level;
    cin >> level;

    level_order(root, level);
    cout << endl;

    return 0;
}
