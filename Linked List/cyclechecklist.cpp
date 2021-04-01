#include<iostream>
using namespace std;
//class to create a node
class node{
	public:
		int data;
		node *next;
};
node *first;
node *current;

// find the loop in the list 
void createlist(int x)
{
	node *temp=new node;
	if(first==NULL)
	{
		temp->data=x;
		temp->next=NULL;
		first=temp;
		current=first;
	}
	else
	{
		temp->data=x;
		temp->next=NULL;
		current->next=temp;
		current=temp;
	}
}
//function to check the loop
void cyclecheck(node *temp)
{
node *slowptr=temp;
node *fastptr=temp;
int level=0;
while(slowptr && fastptr && fastptr->next)
{    slowptr=slowptr->next;
	fastptr=fastptr->next->next;
	
	if(slowptr==fastptr)
	{
		level=1;
		break;
	}

	
}
int counter=0;
	if(level)
	{ 
	fastptr=fastptr->next;
		while(slowptr!=fastptr)
		{
			fastptr=fastptr->next;
			counter++;
		}
		cout<<"this is the position "<<counter;
	}
	else
	  cout<<endl<<"there is no loop exist in the l9inked list  ->";


}
int main()
{
	int ch,val;
	cout<<"enter the choice   ->";
	
	cin>>ch;
	while(ch==1)
	{
		cout<<"enter the value  ->";
		cin>>val;
		createlist(val);
		cout<<"enter the choice   ->";
		cin>>ch;
	}
	cyclecheck(first);
}
