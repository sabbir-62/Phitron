#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void printList(Node* head)
{
    Node* curr = head;

    cout << "L -> ";
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

void printReverse(Node* tail)
{
    Node* curr = tail;

    cout << "R -> ";
    while(curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout << endl;
}

class DoublyLinkedList
{
public:
    Node* head;
    Node* tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insert(int x, int v)
    {
        if(x < 0)
        {
            cout << "Invalid" << endl;
            return;
        }

        Node* newNode = new Node(v);

        if(head == NULL)
        {
            if(x != 0)
            {
                cout << "Invalid" << endl;
                delete newNode;
                return;
            }

            head = newNode;
            tail = newNode;
        }
        else
        {
            if(x == 0)
            {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            else
            {
                Node* curr = head;
                int count = 0;

                while(count < x - 1)
                {
                    curr = curr->next;
                    count++;

                    if(curr == NULL)
                    {
                        cout << "Invalid" << endl;
                        delete newNode;
                        return;
                    }
                }

                newNode->prev = curr;
                newNode->next = curr->next;

                if(curr->next != NULL)
                {
                    curr->next->prev = newNode;
                }
                else
                {
                    tail = newNode;
                }

                curr->next = newNode;
            }
        }

        printList(head);
        printReverse(tail);
    }
};

int main()
{
    int q;
    cin >> q;

    DoublyLinkedList dll;

    for(int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        dll.insert(x, v);
    }

    return 0;
}
