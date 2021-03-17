#include<iostream>
#include<queue>
using namespace std;
struct bstnode{
    int data;
    bstnode* left;
    bstnode* right;
};
bstnode* getNode(int data){
    bstnode* newNode= new bstnode();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
bstnode* Insert(bstnode* root,int data){
    if(root==NULL){
        root=getNode(data);
    }else if(data<=root->data){
        root->left=Insert(root->left,data);
    }else{
        root->right=Insert(root->right,data);
    }
    return root;
}
/*bstnode* deleteNode(bstnode* root,int data){
	if(root==NULL)
	return root;
	else if(data<ro)
}*/
int minimum(bstnode* root){
	bstnode* current=root;
	bstnode* previous=NULL;
	while(current!=NULL){
		previous=current;
		current=current->left;
	}
	if(previous!=NULL)
	return previous->data;
	else
	return 0;
}
int maximum(bstnode* root){
	bstnode* current=root;
	bstnode* previous=NULL;
	while(current!=NULL){
		previous=current;
		current=current->right;
	}
	if(previous!=NULL)
	return previous->data;
	else
	return 0;
}

//pre ,in ,post order traversal are of depth search
void preorderTraversal(bstnode* root){
    if(root==NULL)
        return;
           cout<<root->data<<"-";
    preorderTraversal(root->left);
    preorderTraversal(root->right);

}

void inorderTraversal(bstnode* root){
    if(root==NULL)
        return;
    inorderTraversal(root->left);
    cout<<root->data<<"-";
    inorderTraversal(root->right);

}
void postorderTraversal(bstnode* root){
    if(root==NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<"-";
}
//level order traversal is of breadth first search
void levelorderTraversal(bstnode* root){
    if(root==NULL)
        return;
    queue<bstnode*> q;
    q.push(root);
    while(!q.empty()){
        bstnode* current=q.front();
        cout<<current->data<<"-";
        if(current->left!=NULL) q.push(current->left);
        if(current->right!=NULL) q.push(current->right);
         q.pop();
    }
}
bool searchNode(bstnode* root,int key){
	if (root==NULL)
	return false;
	if(root->data==key)
	return true;
	else if(root->data>key)
	return searchNode(root->left,key);
	else
	return searchNode(root->right,key);
}
int main(){
    bstnode* root=NULL;
    root=Insert(root,8);
    root=Insert(root,4);
    root=Insert(root,12);
    root=Insert(root,2);
    root=Insert(root,6);
    root=Insert(root,10);
    root=Insert(root,14);
    root=Insert(root,1);
    root=Insert(root,3);
    root=Insert(root,5);
    root=Insert(root,7);
    root=Insert(root,9);
    root=Insert(root,11);
    root=Insert(root,13);
    root=Insert(root,15);
    preorderTraversal(root);
    cout<<endl;
   inorderTraversal(root);
   cout<<endl;
   postorderTraversal(root);
   cout<<endl;
   levelorderTraversal(root);
   cout<<endl;
   cout<<searchNode(root,16);
   cout<<endl;
   cout<<maximum(root);
   cout<<endl;
   cout<<minimum(root);
}
