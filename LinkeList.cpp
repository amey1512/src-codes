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

void printNodes(Node *head) {
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

void recursivePrint(Node *head) {
    if(head != NULL) {
        cout<<head->data<<" ";
        recursivePrint(head->next);
    }
}


int main() {
    Node *head;
    Node *temp1 = new Node(5);
    Node *temp2 = new Node(10);
    Node *temp3 = new Node(15);
    Node *temp4 = new Node(20);

    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    
    printNodes(temp1);
    recursivePrint(temp1);
    return 0;
}