#include<bits/stdc++.h>
using namespace std;
//build max heap using heapify

 void heapify(int *arr, int n,int i)
{int largest=i;
  int l=2*i+1;
  int r=2*i+2;

  if(l<n&&arr[largest]>arr[l])
  largest=l;

  if(r<n&&arr[largest]>arr[r])
    largest=r;

    if(largest!=i)
  {
    swap(arr[i],arr[largest]);
    heapify(arr,n,largest);
  }
}
void maxheap(int *arr,int n)
{
  int strtindex=(n/2)-1;
  for(int i=strtindex;i>=0;i--)
  {
    heapify(arr,n,i);
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
  int arr[]={5,15,9,0,4,6,8};
  int n=sizeof(arr)/sizeof(arr[0]);
maxheap(arr,n);
display(arr,n);
}
