#include<iostream>
#include<stack>
#include<iomanip>
#include<queue>
using namespace std;
class node{
public:
int data ;
node *left;
node *right;
};
node *root=NULL;
node* tree()
{
  int x;
  cout<<"enter the data   ->";
  cin>>x;
  if(x==0)
  return 0;
  node *newnode=new node;
  newnode->data=x;
  cout<<"enter the left child of "<<x<<endl;
  newnode->left=tree();
  cout<<"enter the right child of "<<x<<endl;
  newnode->right=tree();
  return newnode;
}
void reverselevelorder(node *head)
{
    queue<node *>q;
    stack<node *>s;
    node *temp=new node;
    q.push(head);
    while(!q.empty())
    {
     temp=q.front();
     q.pop();
     if(temp->left)
        q.push(temp->left);
    if(temp->right)
        q.push(temp->right);
        s.push(temp);
    }
    while(!s.empty())
    {
        temp=s.top();
        s.pop();
        cout<<temp->data<<" ->";
    }
}
int main()
{
    root=tree();
    cout<<"reversing and showing the output"<<endl;
    reverselevelorder(root);
}

