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
void removeDuplicates(Node* head){
    Node* cur=head;
    Node* sec_next;
    if(cur==NULL){
        return;
    }
    while(cur->next!=NULL){
        if(cur->data==cur->next->data){
            sec_next=cur->next->next;
            free(cur->next);
            cur->next=sec_next;
        }
        else{
            cur=cur->next;
        }
    }
}
int main(){
    Node* head=NULL;//starting with an empty list;
    insertInto(&head,1);
    insertInto(&head,2);
    insertInto(&head,2);
    insertInto(&head,4);
    insertInto(&head,5);
    insertInto(&head,5);
    insertInto(&head,5);
    cout<<"Linkedlist before deleting : "<<endl;
    printList(head);
    cout<<endl;
    removeDuplicates(head);
    cout<<"List after removing duplicates : ";
    printList(head);
    return 0;

}