#include<iostream>
using namespace std;
void insertionatindex(int arr[],int sizeOfArray,int index,int element)
{
     
          int temp=0;
        for(int i=0;i<sizeOfArray;i++)
        {
            if(i==index)
             { temp=arr[i];
                 arr[i]=element;
             }
             if(i>index)
             {
                 int temp2=arr[i];
                 arr[i]=temp;
                 temp=temp2;
             }
        }
     
}
int main()
{
    cout<<"enter the size of the array";
    int size;
    cin>>size;
    int arr[size];
    cout<<"enter the values  ->";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    insertionatindex(arr,size,(size/2),20);
   cout<<"printing array  ->";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ->";
    }   

}