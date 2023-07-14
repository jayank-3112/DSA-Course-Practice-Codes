//binary to decimal
#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
#include<math.h>
#include <iostream>
void binarytodecimal();
int main()
{
    binarytodecimal();
    return 1;
}
void binarytodecimal()
{
    int n,digit,i=0,res=0;
    cout<<"Enter the binary number ";
    cin>>n;
    while(n!=0)
    {
        digit=n%10;
        res=res+(pow(2,i)*digit);
        i++;
        n=n/10;
    } 
    cout<<"The decimal value of given binary number is "<<res;
}