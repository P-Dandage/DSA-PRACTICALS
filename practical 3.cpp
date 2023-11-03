#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
	int temp;
	for(int k=1;k<n;k++)
	{
		for(int i=0;i<n-k;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				
			}
		}
	}
}

void selection(int a[],int n)
{
	int temp,pos,i;
	for(int k=0;k<n;k++)
	{
		pos=k;
		i=k+1;
		while(i<n)
		{
			if(a[i]<a[pos])
			pos=i;
			
		i++;
		}
		temp=a[k];
		a[k]=a[pos];
		a[pos]=temp;
	}
}

void display(int a[],int n)
{
		cout<<"\n Sorted array \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
int a[5],n=5,ch;
	cout<<"############### MENU ################## \n";
	do{
 	    cout<<"\n1.BUBBLE \n2.SELECION\n3.EXIT";
 	    cout<<"Enter your choice";
 	    cin>>ch;
 	    switch(ch)
 	    {
 	    	case 1:cout<<"\n Enter a 5 element in array \t :";
				for(int i=0;i<5;i++)
				{
						cin>>a[i];
	               }
			 bubble(a,n);display(a,n);break;
 	    	case 2:cout<<"\n Enter a 5 element in array \t :";
				for(int i=0;i<5;i++)
				{
						cin>>a[i];
	               }selection(a,n); display(a,n);break;
	               case 3:exit(0);break;
 	    	default :cout<<"invalid choice";
		 }
	}while(ch!=3);
}
