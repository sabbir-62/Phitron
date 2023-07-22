
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

int tree_height(Node* root) {
    if (root == NULL)
        {
            return 0;
        }

    int leftHeight = tree_height(root->left);
    int rightHeight = tree_height(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int perfect_tree_nodes(int height) {
    return (1 << height) - 1;
}

bool check_tree(Node* root) {
    int height = tree_height(root);
    int totalNodes = perfect_tree_nodes(height);

    queue<Node*> q;
    q.push(root);
    int count = 0;

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();
        count++;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return (count == totalNodes);
}

int main() {
    Node* root = input_tree();

    if (check_tree(root))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
