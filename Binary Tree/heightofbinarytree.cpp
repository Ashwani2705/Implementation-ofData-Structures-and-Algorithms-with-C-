#include<iostream>
#include<iomanip>
#include<stack>
#include<queue>
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
    if(x==0)
    {
        return 0;
    }
    node *newnode=new node;
    newnode->data=x;
    cout<<"enter teh left child of "<<x<<endl;
    newnode->left=tree();
    cout<<"enter the right child of "<<x<<endl;
    newnode->right=tree();
    return newnode;
}
int height(node *head)
{
        queue<node*> q;
    node* temp=NULL;
    q.push(root);
    q.push(NULL);
    int counter = 0;
    while (!q.empty()) {
        temp = q.front();
        q.pop();
        if (temp == NULL) { //end of last level

            counter++; //increment height
            if (!q.empty())
                q.push(NULL); //end of current level
        }
        else {
            if (temp->left)
                q.push(temp->left); //EnQueue
            if (temp->right)
                q.push(temp->right); //EnQueue
        }
    }
    return counter;

}


int main()
{
    cout<<"enter 0 if the node has not any child ->";
    root=tree();
    cout<<"the height of the binarytree is ->"<<height(root);
}