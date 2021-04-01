#include<iostream>
using namespace std;
//class to create a node
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
//function to insert the data in the linked list by sorting the linked list
void insert(int x,node *temp)
{
    while(temp!=NULL)
    {
        if(temp->data >=x)
        {
            node *temp2=new node;
            temp2->data=x;
            temp2->next=temp->next;
            temp->next=temp2;

         break;
        }
        temp=temp->next;
    }
}
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
int x;
cout<<"enter the value to insert in the list  ->";
cin>>x;
insert(x,head);
cout<<endl<<"entered data is here ->";
show(head);

}