#include<iostream>+

using namespace std;
void Bubble(int a[], int n){
	int i,temp;

	for(int k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if (a[i]>a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;						
			}
		}
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
void Quick(int a[],int n,int first,int rear){
	int i,j,pivot,temp;
	if(first<rear)
	{
		i=first;
		j=rear;
		pivot=first;
		while(i<j)
		{
			while(a[i]<a[pivot]&&i<rear)
			{i++;}
			while(a[j]>a[pivot])
			{j--;
			}
			if(i<j)
			{ 
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		Quick(a,n,first,j-1);
		Quick(a,n,j+1,rear);
		
		
	}
}
int main()
{
	
	int a[5],n=5,first=0,rear=n-1;
	
	int ch;
	do{ cout<<"*************** MENU *************** \n ";
		cout<<"\n1.BUBBLE \n2.QUICK \n3.EXIT \n";
		cout<<"ENTER A CHOICE";
		cin>>ch;
		switch(ch){
			case 1:cout<<"\n Enter a 5 element in array \t :";
				for(int i=0;i<5;i++)
				{
						cin>>a[i];
	               }
                   Bubble (a,n); display(a,n);
			break;
			case 2:cout<<"\n Enter a 5 element in array \t :";
			 		for(int i=0;i<5;i++)
						{
							cin>>a[i];
							}
			Quick(a,n,first,rear); display(a,n);
			break;
			case 3:exit(0);break;
			default :cout<<"\n invalid choice";
			
			}
	
		
	}while(ch!=3);
}
