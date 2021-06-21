#include<bits/stdc++.h>
using namespace std;
int mean(int arr[],int n)
{
    int sum=0;
    int mea=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

    }
    mea=sum/n;
   return(mea);
}
int median(int arr[], int n)
{
   sort(arr,arr+n);
   if(n%2!=0)
   {
       n=n/2;
       return arr[n];

   }
   else{
       int median1=(arr[n/2]+arr[n/2-1])/2;
       return(median1);
   }
}
int main()
{
    int size;
    cout<<"enter the size of the array ->";
    cin>>size;
    int array[size];
    cout<<"enter the value ->";
    for (int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int avg=mean(array,size);
    cout<<"the mean of the array is ->"<<avg;
   int k= median( array,size);
   cout<<"median is ->"<<k;
}