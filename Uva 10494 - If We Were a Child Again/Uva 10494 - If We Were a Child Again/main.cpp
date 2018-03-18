//
//  main.cpp
//  Uva 10494 - If We Were a Child Again
//
//  Created by S M HEMEL on 12/6/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
char res[100000];

void dev(char s[],long long int n)
{
    long long int rem=0,i,j=0;
    char a[100000];
    int f=1;
    for(i=0;i<strlen(s);i++)
    {
        rem=s[i]-'0'+rem*10;
        if(rem/n!=0)
            f=0;
        if(!f)
            printf("%lld",rem/n);
        rem=rem%n;
    }
    if(f)
        printf("0");
}

int rem(char s[],long long int n)
{
    long long  int i,rem=0,j;
    for(i=0;i<strlen(s);i++)
    {
        rem=s[i]-'0'+rem*10;
        rem=rem%n;
    }
    return rem;
}
int main()
{
    char s[100000],t;
    long long int i,j,k,l,m,n;
    while(scanf("%s %c %lld",&s,&t,&n)==3)
    {
        if(t=='/')
        {
            dev(s,n);
            printf("\n");
        }
        else
        {
            m=rem(s,n);
            printf("%lld\n",m);
        }
    }
    return 0;
}*/


#include <iostream>
#define ll long long int
using namespace std;
int main()
{
    char s[100000],t;;
    ll n,m;
    while(scanf("%s %c %lld",&s,&t,&n)==3)
    {
        m = 0;
        m = atoi(s);
        if(t=='/')
            cout << m/n <<endl;
        else
            cout << m%n <<endl;
    }
    return 0;
}
