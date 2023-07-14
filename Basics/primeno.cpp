//Find whether the number is prime or not 
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void checkprime(int);
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    checkprime(n);
    int i=2;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<"\n"<<n<<" occurs in table of "<<i;
        }
        else
        {
            cout<<"\n"<<n<<" not occurs in table of "<<i;
        }
        i=i+1;
    }
    return 1;
}
void checkprime(int n)
{
    int i=2;
    bool flag=0;
    while(i<=n-1)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        i=i+1;
    }
    if(flag==1)
    {
        cout<<"The number is not prime ";
    }
    else
    {
        cout<<"The number is prime";
    }
}