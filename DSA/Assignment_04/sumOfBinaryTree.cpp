#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* connectionBinaryTree()
{
    int val;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }

    Node* root = new Node(val);
    root->left = connectionBinaryTree();
    root->right = connectionBinaryTree();

    return root;
}

int sumOfNodes(Node* root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);

    return root->val + leftSum + rightSum;
}

int main()
{
    Node* root = connectionBinaryTree();

    int result = sumOfNodes(root);
    cout <<  result << endl;


    return 0;
}
