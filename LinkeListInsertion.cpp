#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int x) {
    data = x;
    next = NULL;
    }
};

Node createList(Node *head, int x){
    Node *curr = new Node(x);
    if(head != NULL) {
        head->next = curr;
    }
    return curr;
}

void printNodes(Node *head) {
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
int main() {
    Node *head;
    head = createList(head, 5);
    head = createList(head, 10);
    head = createList(head, 15);
    head = createList(head, 20);

    printNodes(head);
    return 0;
}