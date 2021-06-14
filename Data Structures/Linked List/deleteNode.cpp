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
    last->next=new_node;  //inserting nodes in the ending
    return;
}
void deleteNode(Node** head_ref,int key){
    Node* temp=*head_ref;  //storing the value of head in temp
    Node* prev=NULL; //initializing an empty pointer to find the previous node
    if(temp!=NULL && temp->data==key){
        *head_ref=temp->next;
        delete temp;
        return;
    }
    else{
        while(temp!=NULL && temp->data!=key){
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL){
            return;
        }
        prev->next=temp->next;  //unlink the node from linked list
        delete temp;  //delete the node
    }
}
void printList(Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}
int main(){
    Node* head=NULL; //starting the linkedlist with an empty node
    insertInto(&head,1);
    insertInto(&head,2);
    insertInto(&head,3);
    insertInto(&head,4);
    cout<<"The linkedlist created is : "<<endl;
    printList(head);
    deleteNode(&head,3);
    cout<<endl;
    cout<<"Linkedlist after deleting the key is : "<<endl;
    printList(head);
    return 0;
}
