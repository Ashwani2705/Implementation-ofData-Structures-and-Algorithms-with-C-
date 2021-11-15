#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
};
node *root=NULL;
node* tree()
{
    	int x;
        
	cin>>x;
	node *newnode=new node;
	if(x==-1)
	   return 0;
 newnode->data=x;
 cout<<endl<<"enter left child of "<<x<<"   ->";
 newnode->left=tree();
 cout<<endl<<"enter the right child of "<<x<<"  ->";
 newnode->right=tree();
 return newnode;
}
//now we can find greatest node by traversing the tree it is a  binary tree so we ahve to traverse
//choosing level order traversal
int greatest(node *head)
{
      	node *temp=0;
	if(root==NULL)
	 return 0;
	 queue<node *> s;
	 s.push(head);
     int max=0;
	 while(!s.empty())
	 {
	 	temp=s.front();
	 	s.pop();
	
         if(temp->data>max)
           max=temp->data;
	 	if(temp->left)
	 	   s.push(temp->left);
   if(temp->right)
         s.push(temp->right);
	 }
    return max;

}
int main()
{
   root=tree();
   cout<<"the greatest elemnt in the tree is   ->"<<greatest(root);
}