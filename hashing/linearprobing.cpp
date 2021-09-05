#include<bits/stdc++.h>
using namespace std;
vector<int> linearprobing(int hashsize,int sizeofarray,int arr[])
{
    if(sizeofarray>hashsize)
    {
        hashsize=sizeofarray;
    }
    vector<int> v(hashsize,-1);
for(int i=0; i<sizeofarray; i++)
{
int key=arr[i];
int h=(key)%hashsize;
int count=0;
if(v[h]==-1)
v[h]=key;
else
while(v[h]!=-1 && count<=hashsize)
{
if(v[h]==key)
break;
h=(h+1)%hashsize;
count++;
}
if(v[h]==-1)
v[h]=key;


}
return v;

}
int main()
{
    int s,hashsize;
    cout<<"enter the size of array and the size of the hashtable  ->";
    cin>>s>>hashsize;
    int arr[s];
    cout<<"enter the values in array :  ->";
    for(int i=0;i<s;i++)
      cin>>arr[i];
      vector<int>v;
      v=linearprobing( hashsize,s,arr);
      for(int i=0;i<s;i++)
      {
          cout<<v[i]<<endl;
      }
}