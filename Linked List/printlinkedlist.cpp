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
    else{
        temp->data=x;
        temp->next=NULL;
        current->next=temp;
        current=temp;
    }
}
void printlinkedlist(node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
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
printlinkedlist(head);
}