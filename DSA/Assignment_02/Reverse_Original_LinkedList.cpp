#include<bits/stdc++.h>
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

void printReverse(Node *tmp) {
    if (tmp == NULL)
        return;

    printReverse(tmp->next);
    cout<<tmp->val<< " ";
}

void printOriginal(Node *tmp) {
    if (tmp == NULL)
        return;

    Node* curr = tmp;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
}

int main() {
    int val;
    cin >> val;
    Node *head = new Node(val);
    Node *curr = head;
    while (true) {
            cin >> val;
            if(val == -1){
                break;
            }
            else{
                Node *newNode = new Node(val);
                curr->next = newNode;
                curr = newNode;
            }

    }


    Node *tmp = head;
    printReverse(tmp);
    cout << endl;

    tmp = head;
    printOriginal(tmp);

    return 0;
}
