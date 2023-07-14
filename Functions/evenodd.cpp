//Implementation of the even odd function
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
bool iseven(int);
int main()
{
    int n;
    bool x;
    cout<<"Enter the number ";
    cin>>n;
    x=iseven(n);
    if(x==1)
        cout<<"Number is even ";
    else
        cout<<"Number is odd ";
}
bool iseven(int n)
{
    if(n&1)  //odd
        return 0;
    else    //even 
        return 1;
}
