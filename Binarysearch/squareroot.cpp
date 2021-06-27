//efficient approach using binary search technique
#include<bits/stdc++.h>
using namespace std;
int squareroot(int x)
{
   int low=1,high=x;
   int  ans=0;
     while(low<=high)
     {
         int mid=(low+high)/2;
         int sroot=mid*mid;

         if(sroot==x)
            return mid;
        else if(sroot>x)
          high=mid-1;
        else
        {
           low=mid+1;
           ans=mid; 
        }
     }
     return ans;

}
int main()
{
    cout<<"enter the value of which u want to find the square root ->";
    int x;
    cin>>x;
    cout<<"square root of number is  ->"<<squareroot(x);
}