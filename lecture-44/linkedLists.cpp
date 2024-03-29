#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next; //yeh ek node type ka pointer bna dia humne

    // constructor bna rhe hai abhi apan
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void insertAtTail(Node* &tail, int d){
    
    // new node create krna hai ab
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;

}

void insertAtHead(Node* &head, int d){
    
    // new node create krna hai
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtPosition(Node* &head,int position, int d){

    // alag se condition likhni padegi to insert on 1st position
    if(position == 1){
        insertAtHead(head, d);
        // cout << "agya idhar";
        return;
    }


    Node* temp = head;
    int count = 1; // pahile node pr rahega initially
   
    while(count < position-1){  // 0-based hoti hai indexing
    temp = temp->next;
    count++;
}

    if(temp -> next == NULL) {
        insertAtTail(tail, d);
        return;
    }
    // creating a new node for d jisko insert krna hai
    Node* insertNode = new Node(d);

    insertNode -> next = temp->next;
    temp->next = insertNode;
}

// print krre hai and traverse bhi krre hai apan node ko
void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

// ab hum ek object create krenge
Node* node1 = new Node(100); // declares pointer variable named node1 of type node , // new keyword returns memory address of allocated object and stores it in node1 pointer

// cout << node1 -> data << endl; //pointer hai toh -> use krna padega
// cout << node1 -> next << endl;

Node* head = node1;  // apan ne yaha pr ek head pointer bna diya jo node1 ko point krra hai
// print(head);

//insertAtTail(tail, 12);
// print(head);

Node* tail = node1;
print(head);
insertAtTail(tail, 20);
print(head);

insertAtTail(tail, 10);
print(head);

insertAtPosition(head, 1, 22);
print(head);

return 0;
}