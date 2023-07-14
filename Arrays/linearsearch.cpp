#include<iostream>
using namespace std;
void inputarray(int [],int);
void outputarray(int [],int);
int linearsearch(int [],int,int);
int main()
{
    int arr[100],size,element,pos;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    cout<<"\nEnter the elements of the array ";
    inputarray(arr,size);
    cout<<"\nThe entered elements of the array are ";
    outputarray(arr,size);
    cout<<"\nEnter the element you want to search ";
    cin>>element;
    pos=linearsearch(arr,size,element);
    if(pos!=-1)
        cout<<"\nThe element is present at index "<<pos;
    else
        cout<<"\nThe element is not present in the array ";
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
int linearsearch(int arr[],int size,int element)
{
    int pos=-1;
    for (int i = 0; i < size; i++)
    {
        if(element==arr[i])
        {
            pos=i;
            return pos;
        }
    }
    return pos;
}

