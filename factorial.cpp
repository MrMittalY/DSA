#include<iostream>
using namespace std;
int fact(int x)
{	if(x==0)
		return 1;
	return x*fact(x-1);
}
int main()
{	int n;
	cout<<"\nEnter the no. to find its factorial: ";
	cin>>n;
	cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;
}
