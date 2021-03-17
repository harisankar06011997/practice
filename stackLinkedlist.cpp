#include <iostream>

using namespace std;
struct node{
    int data;
    node* link;
    };
    node* top;
void push(int n){
  node* newNode= new node;
    newNode->data=n;
    newNode->link=top;
    top=newNode;
}
 void pop(){
    node* curr=top;
    if(top==NULL){
        cout<<"nothing to pop"<<endl;
        return;
    }
    top=top->link;
    delete curr;
 }
 void print(){
 node* trav=top;
 while(trav!=NULL){
    cout<<(trav->data)<<" ";
    trav=trav->link;
 }
 cout<<endl;
 }
 void recrevprint(node* p){
     if(p==NULL){
            cout<<endl;
        return;
     }
     recrevprint(p->link);
     cout<<p->data<<" ";
 }
int main()
{
push(4);
push(5);
push(6);
recrevprint(top);
pop();
recrevprint(top);

    return 0;
}

