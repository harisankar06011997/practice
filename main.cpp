#include <iostream>

using namespace std;
struct node{
    int data;
    node* link;
    };
    node* A=NULL;
 void insertEnd(int n){
    node* newNode= new node;
    newNode->data=n;
    newNode->link=NULL;
 if(A==NULL){
    A=newNode;
 }
 else{
    node* trav=A;
    while(trav->link!=NULL){
        trav=trav->link;
    }
    trav->link=newNode;
 }

}
 void insertFirst(int n){
  node* newNode= new node;
    newNode->data=n;
    newNode->link=A;
    A=newNode;

 }
 void printAllNodes(){
 node* trav=A;
 while(trav!=NULL){
    cout<<(trav->data)<<" ";
    trav=trav->link;
 }
 cout<<endl;
 }
 void deleteEnd(){
 node* current=A;
 node* prev=NULL;
 while(current->link!=NULL){
    prev=current;
    current=current->link;
 }
 prev->link=NULL;
 }
 void deleteFirst(){
 A=A->link;
 }
 void ReverseList(){
 node* current=A;
 node* prev=NULL;
 node* next;
 while(current!=NULL){
    next=current->link;
    current->link=prev;
    prev=current;
    current=next;
 }
 A=prev;
 }
 void PrintRecursion(node* head){
 if(head==NULL)
    return;
 cout<<head->data<<" ";
 PrintRecursion(head->link);
 }


int main()
{
     insertFirst(2);
     insertFirst(9);
     printAllNodes();
     insertEnd(8);
     PrintRecursion(A);
     cout<<endl;
     ReverseList();
     printAllNodes();
     ReverseList();
     printAllNodes();
     deleteFirst();
     printAllNodes();
     deleteEnd();
     printAllNodes();

    return 0;
}
