#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

void findMaxMin(Node *head, int &max, int &min)
{
    max = INT_MIN;
    min = INT_MAX;

    Node *tmp = head;
    while(tmp != NULL)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
}

int main()
{
    int values[1000];
    int value;
    int index = 0;

    while(true)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        else
        {
            values[index] = value;
            index++;
        }
    }

    if (index == 0)
    {
        Node *head = NULL;
    }

    Node *head = new Node;
    head->val = values[0];
    head->next = NULL;

    Node *tmp = head;
    for (int i = 1; i < index; i++)
    {
        Node *newNode = new Node;
        newNode->val = values[i];
        newNode->next = NULL;
        tmp->next = newNode;
        tmp = newNode;
    }

    int max, min;
    findMaxMin(head, max, min);

    cout << max << " " << min << endl;

    return 0;
}
