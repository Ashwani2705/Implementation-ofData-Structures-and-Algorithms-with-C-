#include<bits/stdc++.h>
using namespace std;
int secondlargest(int a[] , int n)
{
    int largest=0;
    int sl=-1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[largest])
         {
             sl=largest;
             largest=i;
         }
         else if(a[i]!=a[largest])
        {
            if(sl==-1||a[i]>a[sl])
            sl=i;
        }
    }
    return sl;
}
int main()
{
    int s;
    cout<<"enter the size of the array  ->";
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"the second largest element in the array is ->"<<secondlargest(arr,s);
}