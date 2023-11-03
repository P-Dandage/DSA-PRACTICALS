#include<iostream>
using namespace std;
void linaer(int a[],int n)
{
	int no,f=0;
	cout<<"Enter a number to serach";
	cin>>no;
	for(int i=0;i<n;i++)
	{
		if(a[i]==no)
		{
			f=1;
			cout<<no<<" is found at "<<i;break;
		}
	}
	if(f==0)
	{
		cout<<"Element is not found in array";
	}
	
}

void binary(int a[],int n)
{
	int mid ,beg=0,end=n-1,no;
	cout<<"Enter a elemnet to search";
	cin>>no;
	for(int i=0;i<n;i++)
	{
		mid=(beg+end)/2;
		if(a[mid]==no){
			cout<<no<<" is found at "<<mid;break;
			}else if(no>mid)
			{
				beg=mid+1;
			}
			else
			end=mid-1;
		}

	if(beg>end)
	{
		cout<<"element is not found";
	}
	
}
int main()
{
	int a[5],n=5,ch;
	cout<<"\n Enter a 5 element in array \t :";
				for(int i=0;i<5;i++)
				{
						cin>>a[i];
	               }
	cout<<"############### MENU ################## \n";
	do{
 	    cout<<"\n1.LINEAR \n2.BINARY\n3.EXIT";
 	    cout<<"Enter your choice";
 	    cin>>ch;
 	    switch(ch)
 	    {
 	    	case 1:
			 linaer(a,n);break;
 	    	case 2:binary(a,n);break;
 	    	case 3:exit(0);break;
 	    	default :cout<<"invalid choice";
		 }
	}while(ch!=3);
}
