#include<iostream>
using namespace std;
int Q[50],front=-1,rear=-1,n=50,ch;
	
void insert()
{
	int no;
	if(rear==n-1)
	{
		cout<<"---- overflow  condition----";
	}
	else{
			cout<<"Enter a number to insert";
		cin>>no;
		if(front=-1)
		front=0;
	rear++;
	Q[rear]=no;
	cout<<"Element is inserted successfully";
	}
}

void deleted()
{

	if(front==-1)
	{
		cout<<"------underflow condition------";
	}
	else
	{
	
		cout<<Q[front]<<"is deleted";
		front++;
}
}

void display()
{
	if(front==-1)
	{
		cout<<"\n---- queue is empty------\n";
		
	}
	else
	{ cout<<"\n ****************** element ******************************\n ";
		for(int i=front;i<=rear;i++)
		{
			cout<<Q[i]<<"\t";
			cout<<endl;
		}
	}
}
int main()
{
	
	cout<<"############### MENU ################## \n";
	do{
 	    cout<<"\n1.INSERT \n2.DELETE\n3.DISPLAY\n4.EXIT";
 	    cout<<"\n Enter your choice";
 	    cin>>ch;
 	    switch(ch)
 	    {
 	    	case 1:insert();break;
 	    	case 2:deleted();break;
 	    	case 3:display();break;
 	    	case 4:exit(0);
 	    	default :cout<<"invalid choice";
		 }
	}while(ch!=4);
}
