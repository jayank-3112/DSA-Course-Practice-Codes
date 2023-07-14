//Implementing binary search
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void printarray(vector<int>,int);
int binarysearch(vector <int>,int,int);
int main()
{
    int n,pos,key;
    cout<<"\nEnter the number of elements you want in the array ";
    cin>>n;
    vector <int> arr(n);
    //vector <int> arr;         error we need to specify the size of the vector
    cout<<"\nEnter the elements of the array ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<"\nThe elements of the array entered are ";
    printarray(arr,n);
    cout<<"\nEnter the element you want to search ";
    cin>>key;
    pos=binarysearch(arr,n,key);
    if(pos!=-1)
    cout<<"The element is located at index "<<pos;
    else
    cout<<"The element is not found ";
    return 0;
}
void printarray(vector<int> arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}
int binarysearch(vector <int> arr,int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        start=mid+1;
        else if(arr[mid]>key)
        end=mid-1;
        // mid=(start+end)/2;              chances that sometimes addition might go out of range
        mid=start+(end-start)/2;         //tricky formula used so that addition might not go out of the range
       
    }
    return -1;
}