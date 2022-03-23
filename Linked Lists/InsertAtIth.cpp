// Approach 1
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

Node *takeInput()
{
    // make a static value, to run the input loop until
    // it reaches value
    int data;
    cin >> data;

    // assign null to head, tail before starting
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1){
    // make a dynamic object after every data
     Node *NewNode = new Node(data);
    // if head is null, store newNode in head,tail
    if (head == NULL){
        head = NewNode;
        tail = NewNode;
    }else{
    // else call nextvalue in tail, and store newNode as tail
        tail->next = NewNode;
        tail = tail->next;

    }


        cin >> data;
    }

    // return head at last;
    return head;


}

void print(Node *head)
{
    // make a temp variable to store head
    Node *temp = head;

    // run a loop until temp points to null
    while (temp != NULL){
    // console temp.data and assign nextValue to it
        cout << temp->data << "->";
        temp = temp->next;
    }

}

Node *insertAtIthPos(Node *head, int data, int i){
    // make a newNode with the given data
    Node *NewNode = new Node(data);

    // base case - if pos is 0, store head in NewNodes next
    // and set head as newNode and return it
    if (i == 0){
        NewNode->next = head;
        head = NewNode;
        return head;
    }

    // make sure to go till i - 1 by storing visited in count
    // run a while loop to keep calling next via temp head
    int count = 0;
    Node *temp = head;
    while (temp != NULL and count < i - 1){
        temp = temp->next;
        count++;
    }

    // if head is not null, store current headNext in 3rd var
    // store newNode in headNext
    // store 3rd var in newNodenext
    if (head != NULL){
        Node *extra = temp->next;
        temp->next = NewNode;
        NewNode->next = extra;
    }

}

int main()
{
    Node *head = takeInput();
    

    insertAtIthPos(head, 3, 2);
    print(head);
    return 0;


}


-------------
// Approach 2 via Recursion
    
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

Node *takeInput()
{
    // make a static value, to run the input loop until
    // it reaches value
    int data;
    cin >> data;

    // assign null to head, tail before starting
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1){
    // make a dynamic object after every data
     Node *NewNode = new Node(data);
    // if head is null, store newNode in head,tail
    if (head == NULL){
        head = NewNode;
        tail = NewNode;
    }else{
    // else call nextvalue in tail, and store newNode as tail
        tail->next = NewNode;
        tail = tail->next;

    }


        cin >> data;
    }

    // return head at last;
    return head;


}

void print(Node *head)
{
    // make a temp variable to store head
    Node *temp = head;

    // run a loop until temp points to null
    while (temp != NULL){
    // console temp.data and assign nextValue to it
        cout << temp->data << "->";
        temp = temp->next;
    }

}

Node *insertAtIthPos(Node *head, int data, int i){
    // base case - if head is Null return Null or head
    if (head == NULL){
        return head;
    }
    // if pos is 0, make a newNode, store head in newNodeNext, set head as NewNode
    // return NewNode

    if (i == 0){
        Node *NewNode = new Node(data);
        NewNode->next = head;
        head = NewNode;
        return NewNode;
    }

    // smallerPart - call headNext, with same data, at pos - 1
    Node *smallerHead = insertAtIthPos(head->next, data, i - 1);

    // return calc - store the smallerPart, and return it via headNext
    head->next = smallerHead;
    return head;


}

int main()
{
    Node *head = takeInput();
    

    insertAtIthPos(head, 3, 2);
    print(head);
    return 0;


}
