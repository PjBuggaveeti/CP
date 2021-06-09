#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";  //printing the data
        n=n->next;
    }
}
void InsertAtFront(Node** head_ref,int new_data){
    Node* new_node=new Node();  //allocating node
    new_node->data=new_data;   //assigning data
    new_node->next=(*head_ref);
    (*head_ref)=new_node; //new head is new_node
}
int main(){
    Node* head=new Node();  // allocating new nodes
    Node* second=new Node();
    head->data=6;
    head->next=second;
    second->data=4;
    second->next=NULL;  //the list is 6 4
    InsertAtFront(&head,7);  //list becomes 7 6 4 after inserting 7 at front
    printList(head);
    return 0;
}