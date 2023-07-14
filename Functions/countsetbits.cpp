//Implementation of the counting of set bits (number of bits as 1)
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int countsetbits(int);
int main()
{
    int a,b;
    cout<<"\n Enter the value of a and b ";
    cin>>a>>b;
    int n1,n2;
    n1=countsetbits(a);
    n2=countsetbits(b);
    cout<<"\n Number of set bits in a "<<n1;
    cout<<"\n Number of set bits in b "<<n2;
    cout<<"\n Number of set bits in a and b are"<<(n1+n2);
    return 0;
}

int countsetbits(int n)
{   int count=0;
    while(n>0)
    {
        if(n&1==1)
        count++;
        n=n>>1;
    }
    return count;
}
