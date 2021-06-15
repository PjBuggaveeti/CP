#include <iostream>
using namespace std;
class Node{
    public:
    Node* next;
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
void deleteAtPos(Node** head_ref,int pos){
    if(*head_ref==NULL){
        return;
    }
    Node* temp=(*head_ref);
    if(pos==0){
        *head_ref=temp->next;
        free(temp);
        return;
    }
    for(int i=0;temp!=NULL && i<pos-1;i++){  //find the previous node of the node to be deleted
        temp=temp->next;
    }
    if(temp==NULL || temp->next==NULL){  //if position is more than number of nodes.
        return;
    }
    Node *next=temp->next->next;    //next node of the node to be deleted
    free(temp->next);
    temp->next=next;
}
void printList(Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}
int main(){
    Node* head=NULL;
    insertInto(&head,1);
    insertInto(&head,2);
    insertInto(&head,3);
    insertInto(&head,4);
    insertInto(&head,5);
    cout<<"Linkedlist created is "<<endl;
    printList(head);
    cout<<endl;
    cout<<"Linkedlist after deleting : "<<endl;
    deleteAtPos(&head,3);
    printList(head);
    return 0;
}