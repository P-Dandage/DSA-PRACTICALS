#include<iostream>
using namespace std;
int fibo(int n)
{
	if(n==1||n==0)
	{
		return n;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}
int main()
{
	int no,i=0;
	cout<<"Enter a number";
	cin>>no;
	while(i<no){
		cout<<fibo(i);
		i++;
	}
}
