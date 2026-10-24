#include<iostream>
using namespace std;

struct Node{

Node *next;
int data;

};

void push(Node *&head,int val){

Node *new_node=new Node;
new_node->data=val;
new_node->next=nullptr;

if(head==nullptr){
    head=new_node;
    return;
}

Node *temp=head;

while(temp->next != nullptr){
    temp=temp->next;
}

temp->next=new_node;

}

void pop(Node *&head){

if(head == nullptr){
    return;
}

Node *temp=head;
head=temp->next;

delete temp;

}

void print(Node *head){
Node *temp=head;

while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"rear"<<endl;
}




int main(){

Node *head=nullptr;

push(head,10);
push(head,20);
push(head,30);
print(head);
pop(head);
print(head);


return 0;
}
