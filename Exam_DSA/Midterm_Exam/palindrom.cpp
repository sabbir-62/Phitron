/*
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void insertNode(Node** head, int value) {
    Node* newNode = createNode(value);
    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return true;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prevSlow = nullptr;
    Node* mid = nullptr;
    bool isPalindrome = true;

    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        prevSlow = slow;
        slow = slow->next;
    }

    if (fast != nullptr) {  // Odd number of nodes
        mid = slow;
        slow = slow->next;
    }

    prevSlow->next = nullptr;  // Splitting the linked list

    Node* secondHalf = reverseLinkedList(slow);

    Node* p1 = head;
    Node* p2 = secondHalf;

    while (p1 != nullptr && p2 != nullptr) {
        if (p1->data != p2->data) {
            isPalindrome = false;
            break;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    // Restore the original linked list
    prevSlow->next = mid;
    if (mid != nullptr) {
        mid->next = secondHalf;
    } else {
        prevSlow->next = secondHalf;
    }

    return isPalindrome;
}

int main() {
    Node* head = nullptr;
    int value;

    // Input values until -1 is encountered
    while (cin >> value && value != -1) {
        insertNode(&head, value);
    }

    // Check if the linked list is a palindrome
    if (isPalindrome(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Free the memory
    Node* temp = nullptr;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}*/






#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

bool isPalindrome(Node* head)
{
    if (head == NULL)
    {
        return true;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* prev = NULL;
    Node* curr = slow;
    while(curr != NULL)
    {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    while(prev != NULL)
    {
        if (prev->data != head->data)
        {
            return false;
        }
        prev = prev->next;
        head = head->next;
    }

    return true;
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

    bool result = isPalindrome(head);
    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
