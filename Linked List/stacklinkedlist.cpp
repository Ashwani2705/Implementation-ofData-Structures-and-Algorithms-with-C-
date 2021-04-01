#include<iostream>
using namespace std;
//class to create a node
class node{
	public:
		int data;
		node *next;
		
			
};
node *first=NULL;
node *top;
//function to push the data using linked list
	void push(int x)
			{
				node *temp=new node;
				if(first==NULL)
				{
					temp->data=x;
					temp->next=top;
					top=temp;
					first=temp;
				}
				else
				{
					temp->data=x;
					temp->next=top;
					top=temp;
	     		}
			}
			//pop function to pop out the data using linked list
			void pop()
			{
				node *temp=top;
				if(temp==NULL)
				  cout<<"emppty   ->";
				else
				{
					cout<<top->data;
					top=top->next;
					delete(temp);
				}
			}
int main()
{

	cout<<"enter 1 to push the element   ->";
	int ch;
	cin>>ch;
	int val;
	while(ch==1)
	{
		cout<<"enter the value    ->";
		cin>>val;
		push(val);
		cout<<endl<<"enter the choice  ->";
		cin>>ch;
	}
pop();
pop();
pop();
pop();
}
