//Separate chaining technique in hashing allows to us to use a linked list at each hash
// slot to handle the problem of collisions. T
//hat is, every slot of the hash table is a linked list, so whenever a collision occurs,
// the element can be appened as a node to the linked list at the slot.
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> separatechaining(int arr[],int hashsize,int sizeofarray)
{
    vector<vector<int>>v(hashsize);
           for(int i=0;i<sizeofarray;i++)
       {
           v[arr[i]%hashsize].push_back(arr[i]);
       }
       return v;
    

}
int main()
{
    int n;
    cout<<"enter the size of the array ->";
    cin>>n;
    int m;
    cout<<"enter the size of the hashtable->";
    cin>>m;
    int arr[n];
    cout<<"enter the values ->";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        vector<vector<int>>v;
    v=separatechaining(arr,m,n);
      for(int i=0;i<v.size();i++)
      {
          cout<<i<<"->";
          if(v[i].size()>0)
          {
              for(int j=0;j<v[i].size()-1;j++)
                 cout<<v[i][j]<<endl;
          }
          cout<<v[i][v[i].size()-1];
          cout<<endl;
      }    
        
}
