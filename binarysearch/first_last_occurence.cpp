//First and Last position of an element in Sorted Array
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
int value;
vector <int> arr;
pair<int , int> x;
cout<<"\nEnter the number of elements you want ";
cin>>n;
cout<<"\nEnter the elements in the sorted order ";
for(int i=0;i<n;i++)
{
    int temp;
    cin>>temp;
    arr.push_back(temp);
}
cout<<"\nEnter the value you want to search ";
cin>>value;
int start=0;
int end=n-1;
int mid;
while(start<end)
{
    mid=start +(end-start)/2;
    if(arr[mid]==value)
    {
        end=mid-1;
        x.first=mid;
    }
    else if(arr[mid]<value)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
}
start=0;
end=n-1;
while(start<end)
{
    mid=start +(end-start)/2;
    if(arr[mid]==value)
    {
        start=mid+1;
        x.second=mid;
    }
    else if(arr[mid]<value)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
}
cout<<"\nThe position of the key "<<value<<"is ";
cout<<"\nFirst Occuence "<<x.first;
cout<<"\nSecond Occurence "<<x.second;
return 0;
}
