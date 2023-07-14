#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#include<stdlib.h>
int main()
{
    int amount;
    cout<<"Enter the total amount ";
    cin>>amount;
    int n;
    n=amount;
    vector <int> type={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    switch(1)
        {
            case 1: type[0]=n/2000;
                    n=n%2000;
            case 2: type[1]=n/500;
                    n=n%500;
            case 3: type[2]=n/200;
                    n=n%200;
            case 4: type[3]=n/100;
                    n=n%100;
            case 5: type[4]=n/50;
                    n=n%2000;
            case 6: type[5]=n/20;
                    n=n%20;
            case 7: type[6]=n/10;
                    n=n%10;
            case 8: type[7]=n/5;
                    n=n%5;
            case 9: type[8]=n/2;
                    n=n%2;
            case 10:type[9]=n/1;
                    n=n-1;
        
        }
       /* if(n>=2000)
        {
            type[0]=n/2000;
            n=n%2000;
        }
        else if(n>=500&&n<2000)
        {
            type[1]=n/500;
            n=n-n%500;
        }
        else if(n>=200&&n<500)
        {
            type[2]=n/200;
            n=n%200;
        }
        else if(n>=100&&n<200)
        {
            type[3]=n/100;
            n=n%100;
        }
        else if(n>=50&&n<100)
        {
            type[4]=n/50;
            n=n%50;
        }
        else if(n>=20&&n<50)
        {
            type[5]=n/20;
            n=n%20;
        }
        else if(n>=10&&n<20)
        {
            type[6]=n/10;
            n=n%10;
        }
        else if(n>=5&&n<10)
        {
            type[7]=n/5;
            n=n%5;
        }
        else if(n>=2&&n<5)
        {
            type[8]=n/2;
            n=n%2;
        }
        else if(n>=1&&n<2)
        {
            type[9]++;
            n=n-1;
        }
        */
    cout<<"\nThe number of notes required of each type for total amount of "<<amount<< "are";
    cout<<"\nThe number of 2000 rs notes required : "<<type[0];
    cout<<"\nThe number of 500 rs notes required : "<<type[1];
    cout<<"\nThe number of 200 rs notes required : "<<type[2];
    cout<<"\nThe number of 100 rs notes required : "<<type[3];
    cout<<"\nThe number of 50 rs notes required : "<<type[4];
    cout<<"\nThe number of 20 rs notes required : "<<type[5];
    cout<<"\nThe number of 10 rs notes required : "<<type[6];
    cout<<"\nThe number of 5 rs notes required : "<<type[7];
    cout<<"\nThe number of 2 rs notes required : "<<type[8];
    cout<<"\nThe number of 1 rs notes required : "<<type[9];

}