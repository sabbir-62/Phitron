#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

Node* removeDuplicateValues(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* current = head;
    while(current->next != NULL)
    {
        if(current->data == current->next->data)
        {
            current->next = current->next->next;
        }
        if(current->next == NULL)
        {
            break;
        }
        else if(current->data != current->next->data)
        {
            current = current->next;
        }
    }

    return head;
}

int findLength(Node* head)
{
    int length = 0;
    Node* current = head;
    while(current != NULL)
    {
        length++;
        current = current->next;
    }
    return length;
}


void sortInAscending(Node* head)
{
    int length = findLength(head);

    Node* current;
    Node* tail = NULL;

    while(length > 1)
    {
        current = head;
        while(current->next != tail)
        {
            if(current->data > current->next->data)
            {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
            }
            current = current->next;
        }
        tail = current;
        length--;
    }
}


int main()
{
    Node* head = NULL;
    int val;
    cin >> val;

    while(val != -1)
    {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
        cin >> val;
    }

    sortInAscending(head);

    head = removeDuplicateValues(head);

    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
}
