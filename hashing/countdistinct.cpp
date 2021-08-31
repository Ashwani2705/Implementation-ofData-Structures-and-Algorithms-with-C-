#include<bits/stdc++.h>
using namespace std;
int countDistinct(int arr[],int s)
{
       unordered_set<int>x;
       for(int i=0;i<s;i++)
          x.insert(arr[i]);
         return x.size();
}
int main()
{
    int n;
    cout<<"enter the value  ->";
    cin>>n;
    int arr[n];
    cout<<"enter the value->";
    for(int i=0;i<n;i++)
       cin>>arr[i];
       cout<<"the number of distinct elemnt is->"<<countDistinct(arr,n);
}
