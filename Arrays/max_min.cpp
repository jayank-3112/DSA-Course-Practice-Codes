//Finding minimum and maximum elements in the array
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void printArray(int [],int);
int getmax(int [],int);
int getmin(int [],int);
int main()
{   int num[100];
    int size;
    cout<<"Enter the number of elements you want in array ";
    cin>>size;
   // int num[size];          //not a good thing
   cout<<"Enter the elements of the array ";
   //taking input in array
   for (int i = 0; i < size; i++)
   {
    cin>>num[i];
    /* code */
   }
   cout<<"\nArray Elements are ";
   printArray(num,size);
   cout<<"\nMaximum element in Array ="<<getmax(num,size);
   cout<<"\nMinimum element in Array ="<<getmin(num,size);
   return 0;
}
void printArray(int num[],int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<num[i]<<" ";
    }
    
}
int getmax(int num[],int size)
{
    //int max=INT_MIN;
    int maxi=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        //formula inbuilt function 
        maxi=max(maxi,num[i]);
       /* if(max<num[i])
        {
            max=num[i];
        }
        */
    }
    //returning maximum value
    return maxi;
    
}
int getmin(int num[],int size)
{
    int min=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(min>num[i])
        {
            min=num[i];
        }
    }
    //returning minimum value
    return min;
}