#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

void insertHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

int findLength(Node *head)
{
    int length = 0;
    Node *current = head;
    while(current != NULL)
    {
        length++;
        current = current->next;
    }
    return length;
}

void sortInDescending(Node *head)
{
    int length = findLength(head);

    Node *current;
    Node *tail = NULL;

    while(length > 1)
    {
        current = head;
        while(current->next != tail)
        {
            if(current->value < current->next->value)
            {
                int temp = current->value;
                current->value = current->next->value;
                current->next->value = temp;
            }
            current = current->next;
        }
        tail = current;
        length--;
    }
}

int main()
{
    Node *head = NULL;
    int value;

    while(true)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        insertHead(head, value);
    }

    sortInDescending(head);

    int length = findLength(head);
    int mid = length / 2;
    if(length % 2 == 0)
    {
        mid--;
    }

    Node *current = head;
    for(int i = 0; i < mid; i++)
    {
        current = current->next;
    }

    if(length % 2 != 0)
    {
        cout << current->value << endl;
    }

    else
    {
        cout << current->value << " " << current->next->value << endl;
    }

    current = head;
    while(current != NULL)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}

