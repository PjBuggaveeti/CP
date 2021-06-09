#include <iostream>
#include <algorithm>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";  //printing data
        n=n->next;
    }
}
int main(){
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    //allocating three nodes 
    head=new Node();
    second=new Node();
    third=new Node();
    head->data=1;  //assigning data to first node
    head->next=second; //linking to next node
    second->data=2;  //assigning data to second node
    second->next=third;  //linking second node to third node
    third->data=3;   //assigning data to thirrd node
    third->next=NULL;  
    printList(head);
    return 0;
}