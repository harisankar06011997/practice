#include <iostream>

using namespace std;
struct node{
    int data;
    node* link;
    };
    node* A=NULL;
void insertFirst(int n){
	node* newNode=new node;
	newNode->data=n;
	newNode->link=A;
		A=newNode;
}
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
 void printAllNodes(){
 node* trav=A;
 while(trav!=NULL){
    cout<<(trav->data)<<" ";
    trav=trav->link;
 }
 cout<<endl;
 }
int main()
{


     insertEnd(2);
     insertEnd(9);
     printAllNodes();
     insertEnd(8);
     printAllNodes();
     insertFirst(7);
     printAllNodes();

    return 0;
}
