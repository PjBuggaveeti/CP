#include <iostream>
#include <algorithm>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
};
void insertInto(Node** head_ref,int new_data){
    Node* new_node=new Node();
    Node* last=(*head_ref);
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
    return;
}
void printList(Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}
void NthFromLast(Node* head,int n){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    if(len<n){
        return;
    }
    temp=head;
    for(int i=1;i<len-n+1;i++){
        temp=temp->next;
    }
    cout<<temp->data;
    return;
}
int main(){
    Node* head=NULL;//starting with an empty list;
    insertInto(&head,1);
    insertInto(&head,2);
    insertInto(&head,3);
    insertInto(&head,4);
    insertInto(&head,5);
    cout<<"Linkedlist created : ";
    printList(head);
    cout<<endl;
    cout<<"Nth node from last is : ";
    NthFromLast(head,3);
    return 0;
}