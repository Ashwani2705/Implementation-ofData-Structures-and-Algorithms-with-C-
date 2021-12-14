#include<iostream>
using namespace std;
int fact(int x){
    if(x==0)
    return 1;
    return x*fact(x-1);
}
int main(){
    cout<<"enter the number you ewant to find the factorial of a number->";
    int val;
    cin>>val;
  cout<<endl<<"the factorial of a number is->"<<  fact(val);
}