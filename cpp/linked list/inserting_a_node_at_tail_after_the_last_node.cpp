// inserting an element at the tail(after the last node)

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this -> data = 0;
        this -> next = NULL;
    }

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }


};

void print(Node  *&head){
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // step 1 : create the new node
    Node *newnode = new Node(data);

    if(head == NULL && tail == NULL)
    {
        head = newnode;
        tail = newnode;
        
    }
    else
    {
     while(tail -> next != NULL){
        tail = tail -> next;
    }
    // step 2 : make the original last node point to the newnode. 
    tail -> next = newnode;
    //step 3 : change the tail to point to the newnode so that it becomes the last node
    tail = newnode;
    }
}


int main(){
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    Node *head = first;
    Node *tail = first;


    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = NULL;


    insertAtTail(head,tail,100);


    cout << "printing the linked list... " << endl;
    print(head);

return 0;
}