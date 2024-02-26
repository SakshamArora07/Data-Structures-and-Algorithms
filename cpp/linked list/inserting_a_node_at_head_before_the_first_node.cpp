// inserting a node at head(before the first node)

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

void insertAtHead(Node *&head, int data)
{ 

    // step 1 : create the new node
    Node *newnode = new Node(data);

    if(head == NULL)
    {
        head = newnode;
    }
    else{
    // step 2 : make the new node point to the original 1st node 
    newnode -> next = head;
    //step 3 : change the head to point to the newnode so that it becomes the first node
    head = newnode;
    }
}

int main(){
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    Node *head = first;


    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = NULL;

    cout << "inserting the new node at head..." << endl;
    insertAtHead(head,100);
    insertAtHead(head,101);
    insertAtHead(head,99);


    cout << "printing the linked list... " << endl;
    print(head);

return 0;
}