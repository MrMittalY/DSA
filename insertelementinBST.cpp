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
  int a;
  cin>>a;
  root=insert(root,a);
  for(int i=0;i<6;i++)
  {cin>>a;
    insert(root,a);
  }
  inorder(root);}
