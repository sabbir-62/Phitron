#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

};

int main()
{

    // Static Object
    Node a, b;
    a.val = 10;
    b.val = 20;

    a.next = &b;

    cout<<(*a.next).val<<endl<<a.next->val;

    return 0;
}
