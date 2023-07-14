
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void rotate(int matrix[][3],int n) {
        vector<vector<int>> arr;
        int row=n-1;;
        int col=n-1;
        int j=0;
        int k=0;
        for(int i=row;i>=0;i--)
        {
            for(int j=0;j<col;j++)
            {
                arr[j][k]=matrix[i][j];
            }
            k++;
        }
        cout<<"Rotated image";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<arr[i][j]<<" ";
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                matrix[i][j]=arr[i][j];
            }
        }
    }
int main()
{
    int n;
    int matrix[3][3];
    cout<<"Enter the size of matrix ";
    cin>>n;
    cout<<"Enter the elements of the matrix";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    }
    rotate(matrix,3);
    return 0;
}   