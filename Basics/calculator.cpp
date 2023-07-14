#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#include<stdlib.h>
int main()
{
    int a,b;
    char op;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    cout<<"Enter the operation you want to perform ";
    cin>>op;
    switch (op)
    {
        case '+' :cout<<a+b<<endl; break;
        case '-' :cout<<a-b<<endl; break;
        case '*' :cout<<a*b<<endl; break;
        case '/' :cout<<a/b<<endl; break;
        case '%' :cout<<a%b<<endl; break;

        default:cout<<"This is the default case ";
        break;
    }
}