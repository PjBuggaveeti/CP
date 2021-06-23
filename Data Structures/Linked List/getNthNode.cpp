#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
};
void insert(Node** head_ref,int new_data){
    Node* new_node=new Node();
    Node* last=(*head_ref);
    new_node->next=NULL;
    new_node->data=new_data;
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
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int getNth(Node* head,int index){
    int count=0;
    Node* curr=head;
    while(curr!=NULL){
        if(count==index){
            return curr->data;
        }
        count++;
        curr=curr->next;
    }
    assert(0);
}
int main(){
    Node* head=NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    cout<<getNth(head,3);
    return 0;

}