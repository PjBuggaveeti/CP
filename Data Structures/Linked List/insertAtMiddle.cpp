#include <iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
};
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
void InsertAtMiddle(Node* prev_node,int new_data){
    if(prev_node==NULL){
        cout<<"Previous node cannot be null";
    }
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
int main(){
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* fourth=new Node();
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;  //list will be 1 2 3 4 before insertion
    InsertAtMiddle(second,5);  //inserting after second node.
    printList(head);  //new list will be 1 2 5 3 4
    return 0;
}