#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findb(int arr[],int s,int x)
{   
    int low=0;
    int high=s-1;
    if(low>high)
      return -1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<x)
          low=mid+1;
        else if(arr[mid]>x)
           high=mid-1;
        else
        {
            if(mid=s-1  || arr[mid+1]!=arr[mid])
              return mid;
        }
    }

}
int main()
{
    int s;
    cout<<"enter the number of elements you want to earn  ->";

    cin>>s;
    int arr[s];
    cout<<"enter the values  ->";
    for(int i=0;i<s;i++)
      cin>>arr[i];
      int x;
      sort(arr,arr+n);
      cout<<"enterthe value you want to search  ->";
      cin>>x;
    cout<<"the element at index ->"<<findb(arr,s,x) ;

}