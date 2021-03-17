#include<iostream>
using namespace std;
struct Node{
int data;
Node* link;
};
int cnt=0;
Node* createNode(int data){
Node* bornNode=new Node();
bornNode->data=data;
bornNode->link=NULL;
return bornNode;
}
Node* insertAtBegin(Node* head,int data){
Node* newNode=createNode(data);
newNode->link=head;
head=newNode;
cnt++;
return head;
}
void print(Node* head){
Node* current =head;
while(current!=NULL){
    cout<<current->data<<"->";
    current=current->link;
}
cout<<endl;
}
Node* reverse(Node* head){
Node *current,*previous,*next;
 current=head;
 previous=NULL;
while(current!=NULL){
    next=current->link;
    current->link=previous;
    previous=current;
    current=next;
}
head = previous;
 return head;
}
int main(){
Node* head=NULL;
head=insertAtBegin(head,5);
head=insertAtBegin(head,4);
head=insertAtBegin(head,3);
head=insertAtBegin(head,2);

print(head);
Node* current=head;
Node* previous=NULL;
Node* temp2=current;
if(cnt%2==1){
    temp2=temp2->link;
}
while(temp2!=NULL){
    temp2=temp2->link->link;
    previous=current;
    current=current->link;
}
previous->link=reverse(current);
print(head);

return 0;
}
