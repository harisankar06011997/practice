#include<iostream>
using namespace std;
struct Node{
int data;
Node* link;
};
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
void printRec(Node* p){
    if(p==NULL){
        cout<<endl;
        return;
    }
cout<<p->data<<"->";
printRec(p->link);
}
void reverseprintRec(Node* p){
    if(p==NULL){
        return;
    }
reverseprintRec(p->link);
cout<<p->data<<"->";
}
int main(){
Node* head=NULL;
head=insertAtBegin(head,4);
head=insertAtBegin(head,3);
head=insertAtBegin(head,2);
head=insertAtBegin(head,1);
print(head);
head=reverse(head);
print(head);
printRec(head);
reverseprintRec(head);
return 0;
}

