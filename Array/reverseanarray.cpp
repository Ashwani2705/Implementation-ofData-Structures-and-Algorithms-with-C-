#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0;i<n;i++)
      cout<<arr[i]<<"->";
}
int main()
{
    cout<<"enter the size  ->";
    int s;
    cin>>s;
    int arr[s];
    cout<<"enter the value  ->";
    for(int i=0;i<s;i++)
      cin>>arr[i];
      reverse(arr,s);
}