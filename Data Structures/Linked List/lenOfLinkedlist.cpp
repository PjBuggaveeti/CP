#include <iostream>
#include <algorithm>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
};
void insertInto(Node** head_ref,int new_data){
    Node* last=(*head_ref);
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new_node;
}
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int LenOfList(Node* head){
    int count=0;
    Node* curr=(head);
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    return count;
}
int main(){
    Node* head=NULL;
    insertInto(&head,1);
    insertInto(&head,2);
    insertInto(&head,3);
    insertInto(&head,4);
    cout<<"The linkedlist created is  : "<<endl;
    printList(head);
    cout<<endl;
    cout<<"The length of linkedlist is : "<<LenOfList(head);
    return 0;




}