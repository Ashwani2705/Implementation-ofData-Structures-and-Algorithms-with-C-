#include<bits/stdc++.h>
using namespace std;
void rotateArray(int arr[],int n,int d)
{
      int temp[n];
      for(int i=0;i<n;i++)
       temp[i]=arr[i];
       for(int j=d;j<n;j++)
           arr[j-d]=arr[j];
        for (int i = 0;i < d;i++) {
arr[n-d +i] = temp[i];
}
}
int main()
{
    cout<<"enter the size of the array  ->";
    int s;
    cin>>s;
    int arr[s];
    cout<<"enter the value  ->";
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    int d;
    cout<<endl<<"enter the index at which have to rotate  ->";
    cin>>d;
    rotateArray(arr,s,d);

}