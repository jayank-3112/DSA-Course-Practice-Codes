//Reverse an array
#include<iostream>
using namespace std;
void printarray(int [],int);
void swapalternate(int [],int);
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
    swapalternate(arr,size);
    cout<<"\n The elements after swapping alternate elements are ";
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
void swapalternate(int arr[],int size)
{
    int temp;
    for (int i = 0; i < size-1; i=i+2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    
}