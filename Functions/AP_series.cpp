//Implementation of the ap series (3n+7);
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void apseries(int);
int main()
{   int n;
    cout<<"Enter the value of n ";
    cin>>n;
    apseries(n);
    return 0;
}
void apseries(int n)
{
    cout<<"\nThe terms of the A.P. series are ";
    for(int i=1;i<=n;i++)
    {
        cout<<(3*i+7)<<" ";
    }
    cout<<"\nThe nth term of the series is "<<3*n+7;
}