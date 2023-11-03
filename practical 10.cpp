#include<iostream>
#include<fstream>
using namespace std;
class student{
	public:
		int roll,div;
		char name[30];
		void getdata()
		{      
			cout<<"\nEnter a roll no";
			cin>>roll;
			cout<<"\nEnter a Name";
			cin>>name;
			cout<<"\nEnter a division";
			cin>>div;
		}
		void display()
		{
			cout<<"\n"<<roll<<"\t"<<name<<"\t"<<div;
		}
		int getroll()
		{
			return roll;
		}
	
};
class fun
{ char fname[30];
student s;
	public:
	void create()
	{
		cout<<"\nEnte a file name ";
		cin>>fname;
		ofstream f;
		f.open(fname,ios::app);
		s.getdata();
		f.write((char*)&s,sizeof(s));
		f.close();
	}
	
	void add()
	{
		ofstream f;
		f.open(fname,ios::app);
		s.getdata();
		f.write((char*)&s,sizeof(s));
		f.close();
	}
	
	void displayed()
	{
		ifstream f;
		f.open(fname);
		cout<<"\n****************************************\n";
		cout<<"\nRoll \tNAME \tDIV";
		f.read((char*)&s,sizeof(s));
		while(!f.eof())
		{
			s.display();
			f.read((char *)&s,sizeof(s));
			
			
		}
		f.close();
	cout<<"\n********************************************\n";
	}
	
	
	
	void deleted()
	{
		ifstream f1;
		ofstream f2;
		f1.open(fname);
		f2.open("temp.txt",ios::app);
		int key,f=0;
		cout<<"Enter a roll no to delete";
		cin>>key;
		f1.read((char*)&s,sizeof(s));
		while(!f1.eof())
		{if(s.getroll()==key)
		{
			f=1;
			s.display();
		}else{
			f2.write((char *)&s,sizeof(s));
		}
			
			f1.read((char *)&s,sizeof(s));
		}
		if(f==0)
		{
			cout<<"element is not found";
		}
		f1.close();
		f2.close();
		remove(fname);
		rename("temp.txt",fname);
	}

	
	void search()
	{
		ifstream f;
		f.open(fname);
		int key,flag=0;
		cout<<"\nEnter a roll no to search";
		cin>>key;
		f.read((char *)&s,sizeof(s));
		while(!f.eof())
		{ 
			if(key==s.getroll())
			{ flag=1;  
			s.display();
				break;
			}
			f.read((char*)&s,sizeof(s));
		}
		if(flag==0)
		{
			cout<<"\nElement is not found\n";
		}
		f.close();
		
	}
};

int main()
{
	int ch;
	fun f;
	do
	{    
		cout<<"\n1.CREATE DATABASE\n2.ADD DATA\n3.DELETE DATA\n4.DISPLAY DATA\n5.SEARCH DATA\n6.EXIT";
		cout<<"\nEnter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1:f.create();break;
			case 2:f.add();break;
			case 3:f.deleted();break;
			case 4:f.displayed();break;
			case 5:f.search();break;
			case 6:exit(0);
			default:cout<<"invalid choice";
		}
		
		
	}while(ch!=6);
}
