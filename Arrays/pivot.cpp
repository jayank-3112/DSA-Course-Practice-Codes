/*Find Pivot Element in a rotated sorted array
In this case pivot is smallest element
i/p=[7,9,4,5,6]
o/p=4
*/ 
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr;
    int n;
    cout<<"\nEnter the number of elements you want ";
    cin>>n;
    cout<<"\nEnter the elements in the rotated sorted array ";
    int x;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"\nThe entered elements of the array are ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
            start=mid+1;
        else
            end=mid;
        mid=start+(end-start)/2;   
    }
    cout<<"\nThe pivot element "<<arr[start]<<"is at index "<<start;
    cout<<"\nThe pivot element "<<arr[end]<<"is at index "<<end;
    return 1;
}