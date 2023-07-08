
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

bool descending(int a, int b)
{
    return a > b;
}

int getLength(Node* head) {
    int length = 0;
    Node* current = head;
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    return length;
}

vector<int> getMiddleElements(Node* head) {
    int length = getLength(head);
    int middleIndex = length / 2;

    // Traverse to the middle node(s)
    Node* current = head;
    for (int i = 0; i < middleIndex; i++) {
        current = current->next;
    }

    vector<int> middleElements;
    if (length % 2 == 0) {
        // Even number of nodes, add both middle elements
        middleElements.push_back(current->val);
        middleElements.push_back(current->next->val);
    } else {
        // Odd number of nodes, add the single middle element
        middleElements.push_back(current->val);
    }

    return middleElements;
}

void deleteLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
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


   // Get the middle element(s) of the sorted linked list
    vector<int> middleElements = getMiddleElements(head);

    // Print the middle element(s)
    for (size_t i = 0; i < middleElements.size(); i++) {
        cout << middleElements[i];
        if (i != middleElements.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

     deleteLinkedList(head);
    return 0;
}
