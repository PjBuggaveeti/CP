#include <iostream>
#include <algorithm>
using namespace std;
class Node{
  public:
  Node* next;
  int data;  
};
void pairSwap(Node* head){
    Node* temp=head;
    while (temp != NULL && temp->next != NULL) {
        swap(temp->data,temp->next->data);
        temp = temp->next->next;
    }
}
void insert(Node** head_ref,int new_data){
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    *head_ref=new_node;
}
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main()
{
    Node* head = NULL;
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);
 
    cout << "Linked list created : ";
    printList(head);
    cout<<endl;
    pairSwap(head);
 
    cout << "Linkedlist after swapping : ";
    printList(head);
 
    return 0;
}