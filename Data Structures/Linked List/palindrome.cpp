#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
    Node(int d){
        data=d;
    }
};
bool isPalindrome(Node* head){
    Node* ptr=head;
    stack <int> s;
    while(ptr!=NULL){
        s.push(ptr->data);
        ptr=ptr->next;
    }
    while(head!=NULL){
        int i=s.top();
        s.pop();
        if(head->data!=i){
            return false;
        }
        head=head->next;
    }
    return true;
}
int main(){
    Node one=Node(1);
    Node two=Node(2);
    Node three=Node(2);
    Node four=Node(1);

    four.next=NULL;
    three.next=&four;
    two.next=&three;
    one.next=&two;
    Node* head=&one;
    
    int res=isPalindrome(head);
    if(res==1){
        cout<<"Given list is palindrome";
    }
    else{
        cout<<"Given list is not palindrome";
    }
    return 0;
}