//Implementation of the Arrays
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void printArray(int [],int);  //used to print only integer array
void printArraychar(char [],int);
int main()
{
    //declare 
    int num[10];
    cout<<"\nArray is initialized \n";
    //accessing using index
    cout<<"Value at 0 index "<<num[0]<<endl;
    //cout<<"Value at 20th index "<<num[200]<<endl;
    //initializing an array
    int num2[3]={5,7,21};
    //accessing an element
    cout<<"Value at 2nd index is "<<num2[2]<<endl;
    int third[15]={2,7};
    //printing the array elements 
    cout<<"Third array elements are ";
    for (int i = 0; i < 15; i++)
    {
        /* code */
        cout<<third[i]<<" "; 
    }
    //initiliasing all location with 0
    int fourth[10]={0};
    cout<<"\nFourth array elements are ";
    printArray(fourth,10);
    int fifth[10]={1};
    //calculating the size of an array
    int fifthsize=sizeof(fifth)/sizeof(int);
    cout<<"\nSize of fifth array is "<<fifthsize;
    cout<<"\nFifth array elements are ";
    printArray(fifth,fifthsize);
    char char1[5]={'a','b','c','d','e'};
    printArraychar(char1,5);

    cout<<"\nrun";
    
    return 0;
}
void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<"\nInteger array printing completed \n";
    
}
void printArraychar(char char1[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<char1[i]<<" ";
    }
    cout<<"\ncharacter array printing completed ";
    
}