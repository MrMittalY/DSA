#include<bits/stdc++.h>
//considering a max heap
using namespace std;
void insert(int *arr,int &n,int key)
{
  n=n+1;
  arr[n-1]=key;

int i=n-1;
while(i>0)
  {int parent=(i-1)/2;
  if(arr[parent]<arr[i])
  {swap(arr[parent],arr[i]);
    i=parent;
  }
  else
  return;
}
}
void del(int *arr,int &n)
{int root=arr[0]
  ;
  arr[0]=arr[n-1];
  n=n-1;
  int i=0;
  int lc=1;
  int rc=2;
while(lc<n)

{

int largest=i;

  if( arr[lc]>arr[largest])
  largest=lc;
  if(rc<n && arr[rc]>arr[largest])
  largest=rc;
  if(i!=largest)
  {
    swap(arr[i],arr[largest]);
    i=largest;
  lc=2*i+1;
  rc=2*i+2;}
  else
  return;

  }
}


void display(int *arr,int n)

{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
   cout<<endl;
}
int main()
{
  int arr[]={25,18,19,7,6,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  int key=15;
   insert(arr,n,key);
   display(arr,n);
  del(arr,n);
  display(arr,n);
  del(arr,n);
  display(arr,n);

}
