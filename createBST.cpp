#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node*left;
  node*right;
};
node* getnewnode(int data)
{
  node* newnode=new node();
  newnode->data=data;
  newnode->left=newnode->right=NULL;
  return newnode;
}
node*insert(node*root,int data)
{
  if(root==NULL)
  root=getnewnode(data);
  else if(root->data>=data)
  root->left=insert(root->left,data);
  else
  root->right=insert(root->right,data);
return root;
}
void inorder(node*root)
{
  if(root==NULL)
  return;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}


int main()
{node*root=NULL;
  int arr[]={15,20,17,12,25,10};
  for(int i=0;i<6;i++)
  {
    root=insert(root,arr[i]);
  }
  inorder(root);}
