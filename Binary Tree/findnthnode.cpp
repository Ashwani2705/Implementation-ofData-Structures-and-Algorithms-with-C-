#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
node *first;
node *current;
int count =0;
void createlist(int x)
{
	node *temp=new node;
	count++;
	if(first==NULL)
	{
		temp->data=x;
		temp->next=NULL;
		current=temp;
		first=temp;
	
	}
	else
	{
	temp->data=x;
	temp->next=NULL;
		current->next=temp;
		current=temp;
	}
}
//function to return the node from the back side 
node* findnth(node *temp,int n)
{ int r=0;
	if(n>count)
	{
		cout<<"out of bond  ->";
	}
	else 
	{  r++;
		while(temp!=NULL)
		{
			if(count-n +1==r)
			 return temp;
			 r++;
			 temp=temp->next;
		}
	}
}
int main()
{
	cout<<"enter the choice  ->";
	int ch;
	cin>>ch;
	int val;
	while(ch==1)
	{
		cout<<"enter the value  ->";
		cin>>val;
		createlist(val);
		cout<<"enter the choice ->";
		cin>>ch;
	}
	cout<<"enter the value of nth node to find from the back side of the linked list  ->";
	int n;
	cin>>n;
	node *temp=findnth(first,n);
	cout<<temp->data;
}


