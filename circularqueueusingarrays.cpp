#include<iostream>
#define N 5
using namespace std;
int arr[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{//size full
  if(((rear+1)%N)==front)
  cout<<"overflow"<<endl;
//queue empty
  else if(front==-1&&rear==-1)
  {
    front=0;rear=0;
    arr[rear]=x;
  }
  else
  {
    rear=(rear+1)%N;
    arr[rear]=x;
  }
}
void dequeue()
{
  if(front==-1&&rear==-1)
  {cout<<"underflow"<<endl;}

else if(front==rear)//only one element is in queue
{front=-1;rear=-1;}
  else
  {
    cout<<arr[front]<<":element to be dequeue"<<endl;
  front=(front+1)%N;
  }
}
void peek()
{
  cout<<arr[front]<<endl;
}
void display()
{
  for(int i=front;i!=rear;i=(i+1)%N)
cout<<arr[i]<<" ";
cout<<arr[rear];
cout<<endl;
}

int main()
{
  enqueue(5);
  enqueue(6);
  enqueue(7);
  enqueue(8);
  enqueue(9);
  enqueue(10);
  display();
  dequeue();
  enqueue(10);
  dequeue();
  dequeue();
  enqueue(11);
  display();

}
