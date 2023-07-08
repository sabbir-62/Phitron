#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;

    }

};

int main()
{

    // Static Object
    Node a(100);
    Node b(200);


    a.next = &b;

    cout<<(*a.next).val;

    return 0;
}

