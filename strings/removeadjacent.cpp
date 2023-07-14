#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s) {
        int i=0;
        int k;
        int start;
        while(i<s.length())
        {
            if(s[i]!=s[i+1])
                i=i+1;
            else
            {
                k=start=i;
                int c=0;
                while(s[k]==s[k+1])
                {
                    k=k+1;
                    c++;
                }
                s.erase(start,c+1);
                i=0;
            }
            cout<<"\n\nString after each pass "<<s;
        }
        return s;
}
int main()
{
    string s;
    cout<<"Enter the string ";
    cin>>s;
    removeDuplicates(s);
    return 0;
}
