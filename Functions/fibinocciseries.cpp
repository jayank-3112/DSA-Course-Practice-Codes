//Implementation of the fibinocci series
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void fibonacci(int);
int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int n1=0,n2=1;
    int n3;
    cout<<"The "<<n<<" terms of the fibonacci series are ";
    for(int i=0;i<n-2;i++)
    {
        if(i==0||i==1)
        cout<<i<<" ";
        n3=n2+n1;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    cout<<"The nth term of the fibonacci series is "<<n3;
}
