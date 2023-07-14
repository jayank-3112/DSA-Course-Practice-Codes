#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#include<stdlib.h>
int main()
{
    char ch='A';
    int num=1;
    while(1)
    {
    switch(ch)
    {
        case 1:cout<<"\nCase 1 is executed";
        break;
        case 2:cout<<"\nCase 2 is executed";
        break;
        case 'A':
            switch(num)
            {
                case 1:
                cout<<"\nCase of character is executed" ;
                continue;
                cout<<"\nCase of character executed after continue ";
                break;
            }
        default : cout<<"\nThis is the default case";
        break;         
    }
    exit(0);
    }
    return 1;
}