#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxcon(int arr[],int s)
{
    int count =0;
    int max=0;
    for(int i=0;i<=s-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            continue;
        }
        
        if(count>max)
          max=count;
          count=0;
    }
    return max;
}
int main()
{
    int s;
    cout<<"enter the size of the array  ->";
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
       cin>>arr[i];
       cout<<"the maximum number if consecutive 1 are in the array is->"<<maxcon(arr,s);
}