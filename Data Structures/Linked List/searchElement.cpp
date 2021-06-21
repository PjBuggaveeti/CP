#include <iostream>
#include <algorithm>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
};
void InsertInto(Node** head_ref,int new_data){
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
}
void Printlist(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
bool search(Node* head,int x){
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==x){
            return true;
        }
        curr=curr->next;
    }
    return  false;
}
int main(){
    Node* head=NULL;
    InsertInto(&head,1);
    InsertInto(&head,2);
    InsertInto(&head,3);
    InsertInto(&head,4);
    InsertInto(&head,5);
    cout<<"The linkedlist created is : ";
    Printlist(head);
    cout<<endl;
    if(search(head,5)){
        cout<<"Found";
    }
    else{
        cout<<"Not found!";
    }
    
    return 0;
}