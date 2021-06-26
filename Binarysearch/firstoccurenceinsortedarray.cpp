#include<bits/stdc++.h>
using namespace std;
int findb(int arr[],int s,int x)
{
    int low=0;
    int high=s-1;
    if(low>high)
    {
       return -1;
    }
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<x)
          low=mid+1;
        else if(arr[mid]>x)
          high=mid-1;
        else
        {
            if(mid==0||arr[mid-1]!=arr[mid])
               return mid;
        }
    }
}
int main()
{
    int s;
    cout<<"enter the size of the array  ->";
    cin>>s;
    int arr[s];
    cout<<"enter the values ->";
    for(int i=0;i<s;i++)
      cin>>arr[i];
      sort(arr,arr+s);
      cout<<"enter the value to find ->";
      int x;
      cin>>x;
      cout<<"the value present at the index"<<findb(arr,s,x);
      

}