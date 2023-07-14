//Reverse an array
#include<iostream>
using namespace std;
void printarray(int [],int);
void reverse(int [],int);
int main()
{
    int arr[10],size;
    cout<<"\n Enter the number of elements you want in the array ";
    cin>>size;
    cout<<"\n Enter the elements of the array ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n The entered elements of the array are ";
    printarray(arr,size);
    reverse(arr,size);
    cout<<"\n The elements after reversing are ";
    printarray(arr,size);
    return 0;
}
void printarray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } 
}
void reverse(int arr[],int size)
{
    int last=size-1;
    int temp;
    int start=0;
    while(start<=last)
    {
        temp=arr[last];
        arr[last]=arr[start];
        arr[start]=temp;
        start++;
        last--;
    }    
}