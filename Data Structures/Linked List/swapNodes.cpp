#include <iostream>
#include <algorithm>
using namespace std;
class Node{
    public:
    int data;
    class Node* next;
    Node(int val, Node* next):
    data(val),next(next){}
    void PrintList(){
        Node* n=this;
        while(n!=NULL){
            cout<<n->data<<" ";
            n=n->next;
        }
        cout<<endl;
    }
};
void push(Node** head_ref,int new_data){
      (*head_ref)=new Node(new_data,*head_ref);
}
void swap(Node*& a,Node*& b){
    Node* temp=a;
    a=b;
    b=temp;
}
void swapNode(Node** head_ref,int x,int y){
    if(x==y){
        return;
    }
    Node **a=NULL,**b=NULL;
    while(*head_ref){
        if((*head_ref)->data==x){
            a=head_ref;
        }
        else if((*head_ref)->data==y){
            b=head_ref;
        }
        head_ref=&((*head_ref)->next);
    }
    if (a && b) {
        swap(*a, *b);
        swap(((*a)->next), ((*b)->next));
    }
}
int main(){
    Node* start = NULL;
    push(&start, 7);
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);
    cout << "LinkedList created is : ";
    start->PrintList();
 
    swapNode(&start, 4, 2);
 
    cout << "Linked list after swapping : ";
    start->PrintList();
}
