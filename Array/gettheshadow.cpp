#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"enter the size of the array   ->";
     int arr[s];
     cout<<"enter the value  ";
     for(int i=0;i<s;i++)
        cin>>arr[i];
        int array[s]={0};
        for(int i=0;i<s;i++)
        {
            int t=arr[i];
            array[t]=1+array[t];
        }
        for(int i=0;i<s;i++)
        {
            if(array[i]==0)
              cout<<array[i]<<" ";
            if(array[i]==2)
            cout<<array[i];

        }
}