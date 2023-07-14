#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int a,b;
    /*
    a=10,b=20;
    if(a>b)
    cout<<"Answer is A";
    if(b>a)
    cout<<"Answer is B";
    
   cout<<"Enter 2 numbers ";
    cin>>a>>b;
    if(a>b)
    {
        cout<<"A is greater than B";
    }
    else
    {
        cout<<"B is greater than A";
    }
    
   a=cin.get();
   //assume i/p is 1 2
   cout<<a;
   //output is 49 as a is assigned '1' as character whose ascii value is 49 hence o/p is 49.
   */
  cout<<"Enter the number";
  cin>>a;
  if(a>0)
  cout<<"Number is positive";
  else{
    if(a<0)
    cout<<"Number is negative";
    else
    cout<<"Number is 0";
  }
    return 1;
}