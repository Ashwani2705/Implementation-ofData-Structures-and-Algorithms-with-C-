#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node *prev;
		
};
node *head;
node *current;
void get_list()
{
	node *newnode=new node;
	cout<<"enter the data  ::->";
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL)
	{
		head=current=newnode;
	}
	else
	{
		current->next=newnode;
		newnode->prev=current;
		current=newnode;
	}
}
node* reverse(node *start)
{
	
}
