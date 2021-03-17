#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
    };
Node* getNode(int data){
    Node* newNode=new Node();
    newNode->data=data;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}
Node* insertBegin(Node* head,int data){
    Node* newNode=getNode(data);
    if(head==NULL){
            head=newNode;
    return head;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
    return head;
}
Node* insertTail(Node* head,int data){
    Node* newNode=getNode(data);
    if(head==NULL){
    head=newNode;
    return head;
    }
    Node* curr=head;
    while(curr->next!=NULL){
    curr=curr->next;
    }
    curr->next=newNode;
    newNode->prev=curr;
    return head;
    }
void print(Node* head){
    Node* curr=head;
    while(curr!=NULL){
    cout<<curr->data<<"-";
    curr=curr->next;
    }
    cout<<endl;
    }
Node* insertInAcce(Node* head,int data){
   if(head==NULL){
        head=getNode(data);
        }
        else if(data<=head->data){
            head=insertBegin(head,data);
        }else{
            Node* insrtnod=getNode(data);

    Node* curr=head->next;
    Node* previous=head;
   while(curr!=NULL){
            if(data<curr->data){
                     Node* temp=curr->prev;
                     temp->next=insrtnod;
                    insrtnod->next=curr;
                     curr->prev=insrtnod;
             return head;
            }
            previous=curr;
        curr=curr->next;
    }
    previous->next=insrtnod;
   insrtnod->prev=previous;
        }
        return head;
}
int main(){
    Node* head=NULL;
    head=insertTail(head,1);
    head=insertTail(head,2);
    head=insertTail(head,4);
    head=insertInAcce(head,0);
    head=insertInAcce(head,9);
    head=insertInAcce(head,8);

    print(head);

}
