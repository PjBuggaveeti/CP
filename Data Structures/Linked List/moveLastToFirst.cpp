#include <iostream>
#include <algorithm>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
};
void lastToFirst(Node** head_ref){
    if(*head_ref==NULL || (*head_ref)->next==NULL){
        return;
    }
    Node* secLast=NULL;
    Node* last=(*head_ref);
    while(last->next!=NULL){
        secLast=last;  //second last element 
        last=last->next;  //last element
    }
    secLast->next=NULL; 
    last->next=(*head_ref); //linking the last node to first
    *head_ref=last; //making last node as head
}
void push(Node** head_ref,int new_data){
    Node* new_node=new  Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
    Node* head=NULL;
    push(&head,6);
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    cout<<"Linkedlist created is : ";
    printList(head);
    cout<<endl;
    cout<<"Linked list after moving the last element to front : ";
    lastToFirst(&head);
    printList(head);
    return 0;
}