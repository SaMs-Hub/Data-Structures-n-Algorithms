#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }

};


// printing the Node
void print(Node *head){
  
    // inorder to not manipulate the head, store it another var
    Node *temp = head;

    while (temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{

    // initializing node head, address, and data
    Node *n1 = new Node(1);
    Node *head = n1;

    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    print(head);

    return 0;
}
