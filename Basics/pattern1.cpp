#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void pattern1(int);
void pattern2(int);
void pattern3(int);
void pattern4(int);
void pattern5(int);
void pattern6(int);
void pattern7(int);
void pattern8(int);
void pattern8withoutextravariable(int);
void pattern9(int);
void pattern10(int);
void pattern11(int);
void pattern12(int);
void pattern13(int);
void pattern14(int);
void pattern15(int);
void pattern16(int);
void pattern17(int);
void pattern18(int);
void pattern19(int);
void pattern20(int);
void pattern21(int);
void pattern22(int);
void pattern23(int);
void pattern24(int);
void pattern25(int);
void pattern26(int);

int main()
{
    int n,j,i=1;
    cout<<"Enter the value of n ";
    cin>>n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern8withoutextravariable(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
    pattern23(n);
    pattern24(n);
    pattern25(n);
    pattern26(n);
return 1;
}
void pattern1(int n)
{
    int i,j;
    i=1;
    while(i<=n)
    {   j=1;
        while(j<=n+1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
}
void pattern2(int n)
{
    int i,j;
    i=1;
    while(i<=n)
    {   j=1;
        while(j<=n)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
}
void pattern3(int n)
{
    int i,j;
    i=n;
    while(i>=1)
    {   j=1;
        while(j<=n)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i--;
    }
    cout<<endl;
}
void pattern4(int n)
{
    int i,j,count=1;
    i=1;
    while(i<=n)
    {   j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
}
void pattern5(int n)
{
    int i,j;
    i=1;
    while(i<=n)
    {   j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
}
void pattern6(int n)
{
    int row,col;
    row=1;
    while(row<=n)
    {   col=1;
        while(col<=row)
        {
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern7(int n)
{
    int row,col,count=1;
    row=1;
    while(row<=n)
    {   col=1;
        while(col<=row)
        {
            cout<<count<<" ";
            col++;
            count++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern8(int n)
{
    int row,col,count;
    row=1;
    while(row<=n)
    {   col=1;
        count=row;
        while(col<=row)
        {
            cout<<count<<" ";
            col++;
            count++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern8withoutextravariable(int n)
{
    int row,col;
    row=1;
    while(row<=n)
    {   col=1;
        while(col<=row)
        {
            cout<<row+col-1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern9(int n)
{
    int row,col;
    row=1;
    while(row<=n)
    {   col=1;
        while(col<=row)
        {
            cout<<row-col+1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern10(int n)
{
    int row,col;
    row=1;
    //char ch='A';
    while(row<=n)
    {   col=1;
        while(col<=n)
        {
            cout<<char('A'+row-1)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern11(int n)
{
    int row,col;
    row=1;
    //char ch='A';
    while(row<=n)
    {   col=1;
        while(col<=n)
        {
            cout<<char('A'+col-1)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern12(int n)
{
    int row,col;
    row=1;
    char ch='A';
    while(row<=n)
    {   col=1;
        while(col<=n)
        {
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern13(int n)
{
    int row,col;
    row=1;
    char ch='A';
    while(row<=n)
    {   col=1;
        while(col<=n)
        {
            cout<<char('A'+row+col-2)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern14(int n)
{
    int row,col;
    row=1;
    //char ch='A';
    while(row<=n)
    {   col=1;
        while(col<=row)
        {
            cout<<char('A'+row-1)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern15(int n)
{
    int row,col;
    row=1;
    char ch='A';
    while(row<=n)
    {   col=1;
        while(col<=row)
        {
            cout<<char('A'+row+col-2)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern16(int n)
{
    int row,col;
    row=1;
    char ch='A';
    while(row<=n)
    {   col=1;
        while(col<=n)
        {
            cout<<char('A'+row+col-2)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern17(int n)
{
    int row,col;
    row=1;
    char ch;
    ch='A'+n-1;
    while(row<=n)
    {   col=1;
        while(col<=row)
        {
            cout<<char(ch-row+col)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern18(int n)
{
    int row,col;
    row=1;
    while(row<=n)
    {   int space = n-row;
        col=1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern19(int n)
{
    int row,col;
    row=1;
    while(row<=n)
    {   int space = row-1;
        col=row;
        while(col<=n)
        {
            cout<<"*";
            col++;
        }
      /* No need to print space as they are in the end 
       while(space)
        {
            cout<<" ";
            space--;
        }
         
         */
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern20(int n)
{
    int row,col;
    row=1;
    while(row<=n)
    {   int space = row-1;
        col=row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(col<=n)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern21(int n)
{
    int row,col;
    row=1;
    while(row<=n)
    {   int space = row-1;
        col=row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(col<=n)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern22(int n)
{
    int row,col;
    row=1;
    while(row<=n)
    {   int space = n-row;
        col=1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(col<=row)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern23(int n)
{
    int row,col;
    row=1;
    while(row<=n)
    {   int space = row-1;
        col=row;
        int k=1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(col<=n)
        {
            cout<<row+k-1;
            col++;
            k++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}
void pattern24(int n)
{
    int i,j,space,k;
    i=1;
    while(i<=n)
    {
        j=1;
        space = n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        k=j-2;
        if(i>1)
        {
            while(k>=1)
            {
                cout<<k;
                k--;
            }
        }    
            i++;
            cout<<endl;
    }
    cout<<endl;
}
void pattern25(int n)
{
    int i,j,k,star,l;
    i=1;
    l=n;
    while(i<=n)
    {
        j=1;
        while(j<=l)
        {
            cout<<j;
            j++;
        }
        star=2*(i-1);
        while(star)
            {
                cout<<"*";
                star--;
            }
        k=j-1;
        while(k>=1)
        {
            cout<<k;
            k--;
        }
        l--;
        i++;
        cout<<endl;      
    }
}
void pattern26(int n)
{
    int i,j,star,k;
    i=n;
    while(i>=1)
    {
        //1st traingle
        j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        //2nd Triangle represents *
        star=2*(n-i);
        while(star)
        {
            cout<<"*";
            star--;
        }
        //3rd Triangle
        j=j-1;
        while(j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i--; 
    }
}