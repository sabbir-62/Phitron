#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    long long int val;
    Node *next;

    Node(long long int val) {
        this->val = val;
        this->next = NULL;
    }
};

Node *insertHead(Node *head, long long int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    return newNode;
}

Node *insertTail(Node *head, long long int val) {
    Node *newNode = new Node(val);
    if(head == NULL){
        return newNode;
    }

    Node *curr = head;
    while (curr->next != NULL){
        curr = curr->next;
    }

    curr->next = newNode;
    return head;
}

void print(Node *head) {
    Node *curr = head;
    cout << curr->val << " ";
    while (curr->next != NULL){
        curr = curr->next;
    }
    cout << curr->val << endl;
}

int main() {
    long int q;
    cin >> q;

    Node *head = NULL;

    while (q--) {
        int x;
        long long v;
        cin >> x >> v;

        if (x == 0){
            head = insertHead(head, v);
        }
        else if (x == 1){
            head = insertTail(head, v);
        }
        print(head);
    }
    return 0;
}



#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

Node *insertHead(Node *head, int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    return newNode;
}

Node *insertTail(Node *head, int val, Node *&tail) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

void print(Node *head, Node *tail) {
    cout << head->val << " " << tail->val << endl;
}

int main() {
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            head = insertHead(head, v);
            if (tail == NULL) {
                tail = head;
            }
        } else if (x == 1) {
            head = insertTail(head, v, tail);
            if (head->next == NULL) {
                tail = head;
            }
        }
        print(head, tail);
    }

    return 0;
}

