#include <iostream>
#include <algorithm>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
};
void push(Node** head_ref,int new_data){
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
Node* sortedIntersect(Node* a,Node* b){
    Node temp;
    Node* tail=&temp;
    temp.next=NULL;
    while(a!=NULL && b!=NULL){
        if(a->data==b->data){
            push((&tail->next),a->data);
            tail=tail->next;
            a=a->next;
            b=b->next;
        }
        else if(a->data<b->data){
            a=a->next;
        }
        else{
            b=b->next;
        }
    }
    return (temp.next);
}
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
    Node* a=NULL;
    Node* b=NULL;
    Node* Intersect=NULL;
    push(&a,5);
    push(&a,4);
    push(&a,3);
    push(&a,2);
    push(&a,1);
    push(&b,6);
    push(&b,4);
    push(&b,2);
    Intersect=sortedIntersect(a,b);
    cout<<"Linkedlist after intersection : ";
    printList(Intersect);
}