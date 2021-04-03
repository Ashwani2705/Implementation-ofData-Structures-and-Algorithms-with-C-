#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *right;
    node *left;
};
node* tree()
{
    int x;
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
int height(node *head)
{
  queue<node *>q;
  int count=0;
  node *temp;
  if(head==NULL)
  {
    q.push(head);
  }
  while(q.size())
  {
    int size=q.size();
    while(size--)
    {
      temp=q.front();
      if(temp->left)
        q.push(temp->left);
        if(temp->right)
         q.push(temp->right);
         q.pop();
    }
    count++;
  }
  return count;
}
int main()
{
  node *root=tree();
  cout<<"the height of the tree is ::"<<height(root);
}