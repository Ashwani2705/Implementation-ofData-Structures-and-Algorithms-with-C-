#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class node {
    public:
    int data;
    node *left;
    node *right;
};
node *root=0;
node* tree()
{
    int x;
    cin>>x;
    if(x==0)
      return 0;
      node *newnode =new node;
      newnode->data=x;
      cout<<"enter the left child of "<<x<<" ->"<<endl;
      newnode->left=tree();
      cout<<"enter the right child of "<<x<<"  ->"<<endl;
         newnode->right=tree();

         return newnode;
}
int search(node *head,int x)
{
 node  *temp=new node;
 queue<node *>q;
 q.push(head);
 while(!q.empty())
 {
     temp=q.front();
     q.pop();
     if(x==temp->data)
        return 1;
      if(temp->left)
         q.push(temp->left);
        if(temp->right)
          q.push(temp->right);
    }
    return 0;
}
int main()
{
    root=tree();
    cout<<"enter the number u ewant to check that it is present or not  ";
    int searc;
    cin>>searc;
    if(search(root,searc))
      cout<<"yes the digit is present  ";
    else 
    cout<<"OOPS u forgot to enter the digit  ";
    return 0;

}
