#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            data=d;
            next=NULL;
        }
};


void InsertAtTail(node*&head, int data){

    if(head==NULL){
        head=new node(data);
        return;
    }

    node *tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next= new node(data);
    return;
}

node* take_input(){
    int d;
    cin>>d;

    node*head=NULL;

    while (d!=-1){
        InsertAtTail(head, d);
        cin>>d;
    }
    return head;
}

void print(node*head){
    while(head->next!=NULL){
        cout<<head->data;
        head=head->next;
    }
}

node* ElementFromEnd(node*head, int p){

    node* slow= head;
    node* fast= head;

    while(p!=1){
        fast=fast->next;
        p--;
    }

    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}

int main() {
    node*head = take_input();
    int pos;
    cin>>pos;
    node*ans= ElementFromEnd(head, pos);
    cout<<ans->data;

}
