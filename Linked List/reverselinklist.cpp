#include<iostream>
using namespace std;
//a node class to create node
class node{
    public:
    int data;
    node *next;
};
node *head;
node *current;
//function to create linked list
void createlist(int x)
{
    node *temp=new node;
    if(head==NULL)
    {
        temp->data=x;
        temp->next=NULL;
        head=temp;
        current=temp;
    }
    else
    {
        temp->data=x;
        temp->next=NULL;
        current->next=temp;
        current=temp;
    }
}
//function returning a node which reverse the linked list
node* reverse(node *first)
{
    node *temp=NULL;
    node *temp1=NULL;
    while(first!=NULL)
    {
        temp1=first->next;
        first->next=temp;
        temp=first;
        first=temp1;
    }
    return temp;
}
//function to print the linked list
void show(node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ->";
        temp=temp->next;
    }
}
int main()
{
int ch,val;
cout<<"enter 1 foe entering the value  ->";
cin>>ch;
while(ch==1)
{
    cout<<"enter the value  ->";
    cin>>val;
    createlist(val);
    cout<<"enter ur choice  ->";
    cin>>ch;
}
node *k=reverse(head);
show(k);
}