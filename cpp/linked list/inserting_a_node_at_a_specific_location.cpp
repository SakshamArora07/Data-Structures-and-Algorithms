// inserting an element at a specific location

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

void insertAtHead(Node *&head, Node *&tail,  int data)
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

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // step 1 : create the new node
    Node *newnode = new Node(data);

    if(head == NULL)
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

int findLength(Node *&head)
{
    int length = 0;
    Node *temp = head;
    while(temp != NULL){
        temp = temp -> next;
        length++;
    }
    return length;
}

void insertAtSpecificLocation(int position, Node *&head, Node *&tail, int data)
{

    if(position <= 0) //insert at head case
    {
        insertAtHead(head, tail, data);
        return;
    }

    int length = findLength(head);
    if(position > length)
    {
        insertAtTail(head, tail, data);
        return;
    }
    

    // step 1 : create the new node
    Node *newnode = new Node(data);

    if(head == NULL && tail == NULL)
    {
        head = newnode;
        tail = newnode;
        
    }
    else
    {

    //step 2 : find the location
    int i = 1;
    Node *prev = head;
    while(i < position) // find prev position which is the speified position
    {
        prev = prev -> next;
        i++;
    }
    Node *current = prev -> next; // finding current position which is next to the found prev position.

    // step 3 : creating new link
    newnode -> next = current;

    //step 4 : breaking old link
    prev -> next = newnode;
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


    insertAtSpecificLocation(3,head,tail,100);
    // insertAtSpecificLocation(1,head,tail,101);
    // insertAtSpecificLocation(2,head,tail,102);
    // insertAtSpecificLocation(3,head,tail,103);
    // insertAtSpecificLocation(4,head,tail,104);
    // insertAtSpecificLocation(5,head,tail,105);
    // insertAtSpecificLocation(6,head,tail,106);

    // insertAtSpecificLocation(6,head,tail,900);
    // insertAtSpecificLocation(3,head,tail,800);



    cout << "printing the linked list... " << endl;
    print(head);

return 0;
}