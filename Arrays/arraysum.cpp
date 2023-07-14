#include<iostream>
using namespace std;
void inputarray(int [],int);
void outputarray(int [],int);
int getsum(int [],int);
int main()
{
    int arr[100],size;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    cout<<"\nEnter the elements of the array ";
    inputarray(arr,size);
    cout<<"\nThe entered elements of the array are ";
    outputarray(arr,size);
    cout<<"\nThe Sum of the elements of the array = "<<getsum(arr,size);
    return 0;
}
void inputarray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
}
void outputarray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int getsum(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
