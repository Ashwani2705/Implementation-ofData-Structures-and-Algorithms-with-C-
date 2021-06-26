#include<iostream>
#include<algorithm>
using namespace std;
int bsearch(int arr[],int s,int x)
{
    int low=0;
    int high=s-1;
    int check=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            check++;
            return mid;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(check==0)
      return -1;

}
int main()
{
    int s;
    cout<<"enter the size of the array  ->";
    cin>>s;
    int arr[s];
    cout<<"enter the values->";
    for(int i=0;i<s;i++)
    cin>>arr[i];
    sort(arr,arr+s);
    cout<<"enter the value to search  ->";
    int x;
    cin>>x;
    cout<<"index of the element"<<bsearch(arr,s,x);

}