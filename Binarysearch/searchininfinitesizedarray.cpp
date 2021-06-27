#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int low,int high,int x)
{
    if(low > high)
		return -1;

	int mid = (low + high) / 2;

	if(arr[mid] == x)
		return mid;

	else if(arr[mid] > x)
		return bsearch(arr, low, mid - 1, x);

	else
		return bsearch(arr, mid + 1, high, x);

}
int search(int arr[],int x)
{
    int i=1;
  while(arr[i]<x)
    i=i*2;
    if(arr[i]==x)
      return i;
      
    return (bsearch(arr,(i/2)+1,i-1,x));
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    int x;
    cout<<"enter the number you want to search  ->";
    cin>>x;
    cout<<"the index at which it is present   ->"<<search(arr,x);
    
}