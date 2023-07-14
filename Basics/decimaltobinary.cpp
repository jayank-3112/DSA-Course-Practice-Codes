//Program to convert decimal to binary
//COmplier not giving the required result
#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
#include<math.h>
#include <iostream>
int decimaltobinary(int);
void negativenumbertobinary();
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    int n;
    std::cout<<"Enter the decimal number ";
    std::cin>>n;
    //decimaltobinary(n);
    negativenumbertobinary();
    return 0;
}
int decimaltobinary(int n)
{
    int bit,res,i;
    res=0;
    i=0;
    while(n!=0)
    {
        bit = n & 1;
        res = (bit*pow(10,i))+res;
        n = n>>1;
        i++;
    }
    //std::cout<<"The binary number is "<<res;
    return res;
}
void negativenumbertobinary()
{
    int n;
    std::cout<<"Enter the negative number ";
    std::cin>>n;
    n=n*-1;
    int res=decimaltobinary(n);
    int onescomp,twoscomp;
    onescomp=~res;
    twoscomp=onescomp+1;
    std::cout<<"The binary repesentation of negative number ";
    std::cout<<twoscomp;
    
}
