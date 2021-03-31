#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node *next;
};
node *head=NULL;
node *current=NULL;
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
void middleelment(node *first)
{
    node *slowptr,*fastptr;
    slowptr=fastptr=first;
    int ite=0;
    while(fastptr->next!=NULL)
    {
        if(ite==0)
        {
            fastptr=fastptr->next;
            ite=1;
        }
        else if(ite==1)
        {
            fastptr=fastptr->next;
             slowptr=slowptr->next;
             ite=0;
        }
    }
    cout<<endl<<"middle elment in the list is  ->"<<slowptr->data;
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
middleelment(head);
}