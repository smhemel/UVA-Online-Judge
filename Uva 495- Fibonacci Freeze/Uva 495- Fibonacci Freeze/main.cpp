//
//  main.cpp
//  Uva 495- Fibonacci Freeze
//
//  Created by S M HEMEL on 10/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return(fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
    int n;
    while (cin >> n)
        cout << "The Fibonacci number for "<< n << " is "<< fibonacci(n) <<endl;
    return 0;
    
}*/


/*#include<iostream>
#include<string>
#include<iomanip>
#include<cstdio>
using namespace std;
long double allfib[1000000];
long double fibo(int n);
int main()
{
    int n;
    long double x;
    while(cin>>n){
        x = fibo(n-1);
        cout << "The Fibonacci number for "<< n << " is "<< x <<endl;
        //cout<<fixed<<setprecision(0)<<x<<endl;
        printf("");
    }
}
long double fibo(int n)
{
    if(n<=1)
        return 1;
    if(allfib[n]>0)
        return allfib[n];
    long double x = fibo(n-1)+fibo(n-2);
    allfib[n]=x;
    return x;
}*/

#include <iostream>
#include<stdio.h>
using namespace std;
#define lim 5001
#define len 1050
int fbn[lim][len];
void fibonacci()
{
    fbn[0][0]=0;
    fbn[1][0]=1;
    fbn[2][0]=1;
    for(int i=3;i<lim;i++)
    {
        for(int j=0;j<len;j++)
        {
            fbn[i][j]+=fbn[i-2][j]+fbn[i-1][j];
            if(fbn[i][j]>=10)
            {
                fbn[i][j+1]+=fbn[i][j]/10;
                fbn[i][j]%=10;
            }
        }
    }
}

int main()
{
    fibonacci();
    int n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=len-1;i>0;i--)
        {
            if(fbn[n][i]!=0)break;
        }
        printf("The Fibonacci number for %d is ",n);
        for(;i>=0;i--)printf("%d",fbn[n][i]);
        printf("\n");
    }
    return 0;
}
