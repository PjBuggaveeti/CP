#include <iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
};
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";  //printing the data
        n=n->next;
    }
}
void InsertAtEnd(Node** head_ref,int new_data){
    Node* new_node=new Node();  //allocating node
    Node* last=(*head_ref);
    new_node->data=new_data;
    new_node->next=NULL;    //next of new node is NULL
    if(*head_ref==NULL){   //if the list is empty then new node is head
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL){  //else traverse till the end of list
        last=last->next;
    }
    last->next=new_node;   //next of last node is new node
    return;
}
int main(){
    Node* head=new Node();  // allocating new nodes
    Node* second=new Node();
    head->data=6;
    head->next=second;
    second->data=4;
    second->next=NULL;  //the list is 6 4
    InsertAtEnd(&head,7);  //list becomes 6 4 7 after inserting 7 at end
    printList(head);
    return 0;
}