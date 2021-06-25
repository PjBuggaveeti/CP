#include <iostream>
#include <algorithm>
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
void printList(Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}
int countNodes(Node* n){
    int cnt=1;
    Node* temp=n;
    while(temp->next!=n){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int detectAndCount(Node* ptr){
    Node *slow=ptr, *fast=ptr;
    while(slow && fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return countNodes(slow);
        }
    }
    return 0;
}
int main(){
    Node* head=NULL;//starting with an empty list;
    insertInto(&head,1);
    insertInto(&head,2);
    insertInto(&head,3);
    insertInto(&head,4);
    insertInto(&head,5);
    insertInto(&head,6);
    insertInto(&head,7);
    cout<<"Linkedlist created : ";
    printList(head);
    cout<<endl;
    head->next->next->next->next->next->next=head; //creating a loop
    cout<<"Number of elements in loop : "<<detectAndCount(head); 
    
    return 0;
}