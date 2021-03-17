#include<iostream>
using namespace std;
struct node{
int data;
node* link;
};
node* head=NULL;
node* rear=NULL;
void enqueue(int data){
    node* newNode=new node();
    newNode->data=data;
    newNode->link=NULL;
if(head==NULL&&rear==NULL){
    head=newNode;
    rear=newNode;
}
else{
    rear->link=newNode;
    rear=newNode;
}
}
void dequeue(){
if(rear==head){
    rear=NULL;
    head=NULL;
}else{

head=head->link;

}
}
void print(){
node* curr=head;
while(curr!=NULL){
    cout<<curr->data<<" ";
curr=curr->link;
}

cout<<endl;
}
int main(){
enqueue(2);
enqueue(7);
enqueue(2);
enqueue(7);
print();
dequeue();
print();
enqueue(9);
print();
}
