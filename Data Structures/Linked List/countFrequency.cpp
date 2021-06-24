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
int countFrequency(Node* head,int n){
    int count=0;
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==n){
            count++;
        }
        curr=curr->next;
    }
    return count;
}
int main(){
    Node* head=NULL;//starting with an empty list;
    insertInto(&head,1);
    insertInto(&head,2);
    insertInto(&head,1);
    insertInto(&head,4);
    insertInto(&head,1);
    insertInto(&head,6);
    cout<<"Linkedlist created : ";
    printList(head);
    cout<<endl;
    cout<<"Frequency of given number is : "<<countFrequency(head,1);
    return 0;
}