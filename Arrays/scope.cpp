#include<iostream>
using namespace std;

void update(int arr[],int n)
{
    cout<<"\nInside the update function \n"; 
    //updating array's 1st element 
    arr[0]=123;
    //printing the array
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nGoing Back to main function \n";

}
int main()
{
    int arr[3]={1,2,3};
    update(arr,3);
    //printing the array
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}