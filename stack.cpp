#include <iostream>

using namespace std;
struct node{
    int data;
    node* link;
    };
    node* A;
    void insertFirst(int n){
  node* newNode= new node;
    newNode->data=n;
    newNode->link=A;
    A=newNode;

 }
 void deleteFirst(){
     if(A!=NULL)
     A=A->link;
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


     insertFirst(1);
     insertFirst(2);
     insertFirst(3);
     printAllNodes();
     deleteFirst();
     printAllNodes();
     deleteFirst();
     printAllNodes();
    return 0;
}

