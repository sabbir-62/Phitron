
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

bool check(Node *head1, Node *head2) {

    while (head1 != NULL && head2 != NULL) {
        if (head1->val != head2->val) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == NULL && head2 == NULL) {
        return true;
    }
    return false;
}


int main()
{
    int values1[1000];
    int values2[1000];
    int value;
    int count = 0;
    int index1 = 0;
    int index2 = 0;

    while(true)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        else
        {
            values1[index1] = value;
            index1++;
        }
    }

    while(true)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        else
        {
            values2[index2] = value;
            index2++;
        }
    }

    if (index1 == 0)
    {
        Node *head1 = NULL;
    }
    if (index2 == 0)
    {
        Node *head2 = NULL;
    }

    Node *head1 = new Node;
    head1->val = values1[0];
    head1->next = NULL;

    Node *tmp1 = head1;
    for (int i = 1; i < index1; i++)
    {
        Node *newNode = new Node;
        newNode->val = values1[i];
        newNode->next = NULL;
        tmp1->next = newNode;
        tmp1 = newNode;

    }

    Node *head2 = new Node;
    head2->val = values2[0];
    head2->next = NULL;

    Node *tmp2 = head2;
    for (int i = 1; i < index2; i++)
    {
        Node *newNode = new Node;
        newNode->val = values2[i];
        newNode->next = NULL;
        tmp2->next = newNode;
        tmp2 = newNode;
    }

    bool result = check(head1, head2);

    if (result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
