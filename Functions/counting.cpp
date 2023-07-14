//Implementation of counting 1 to n  
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void counting(int);
int main()
{   int n;
    cout<<"Enter the value of n ";
    cin>>n;
    counting(n);
    return 0;
}
void counting(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<" "<<i;
    }
    cout<<endl;
}