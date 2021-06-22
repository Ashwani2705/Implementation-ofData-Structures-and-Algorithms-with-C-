//remove the dupicate from an array and return the size of the new array 
#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[],int n)
{
    int temp[n];
    int k=arr[0];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int j=0;j<res;j++)
    arr[j]=temp[j];
    return res;
       
    return res;



}
int main()
{
    cout<<"enter the size of an array ->";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the value  ->";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int k=removeDuplicate(arr,n);
    cout<<"there are "<<k<<" distinct elemnts present in the array";

}