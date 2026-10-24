#include<iostream>
using namespace std;

struct Node{

Node *next;
int data;

};

void push_back(Node *&head,int val){

Node *newNode=new Node;

newNode->next=nullptr;
newNode->data=val;

if(head==nullptr){
    head=newNode;
    return;
}

Node *temp=head;
while (temp->next != nullptr){
    temp=temp->next;
}
temp->next=newNode;
}

void push_front(Node *&head,int val){

Node *newNode =new Node;
newNode->next=head;
newNode->data=val;
head=newNode;

}

void push_pos(Node *&head,int val,int pos){

Node *newNode=new Node;

newNode->next=nullptr;
newNode->data=val;

if(pos==0){
    newNode->next=head;
    head=newNode;
    return;
}
Node *temp=head;
int i=0;
while (temp != nullptr && i < pos - 1) {
        temp = temp->next;
        i++;
    }
newNode->next=temp->next;
temp->next=newNode;

}

void pop_front(Node *&head){
 if (head == nullptr) return;
Node *temp=head;
head=head->next;

delete temp;
}

void pop_back(Node *&head){
 if (head == nullptr) return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
Node *temp=head;

while(temp->next->next!=nullptr){
    temp=temp->next;
}

Node *last=temp->next;
temp->next=nullptr;
delete last;
}

void print_list(Node *head){

if(head==nullptr){
    return;
}

Node *temp=head;
while(temp!=nullptr){
        cout<< temp->data<<"->";
    temp=temp->next;
}

cout<<"Null";

}

int main(){
Node *head=nullptr;
push_back(head,20);
push_back(head,40);
push_front(head,10);
push_pos(head,30,2);
print_list(head);
pop_front(head);
pop_back(head);
cout<<endl;
print_list(head);

push_pos(head,60,2);
print_list(head);
return 0;
}
