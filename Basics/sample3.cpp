// Check whether the character is lower case upper case or digit
#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    char ch;
    cout<<"\nEnter the character  " ;
    cin>>ch;
    if(ch>='A'&&ch<='Z')
        cout<<"\nThe entered character is an upper case character";
    else if(ch>='a'&&ch<='z')
        cout<<"\nThe entered character is an lower case character";
    else if(ch>='0'&&ch<='9')
        cout<<"\nThe entered character is a digit";
    return 1;
}