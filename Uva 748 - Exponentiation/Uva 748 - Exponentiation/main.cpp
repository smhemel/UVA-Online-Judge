//
//  main.cpp
//  Uva 748 - Exponentiation
//
//  Created by S M HEMEL on 12/6/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<stdio.h>
#include<cstring>
#define max 250
using namespace std;
int c[max];
int temp[max];
int len;
int dot(char* oc,int nc[])
{
    int j=1,i,k=0;
    int oclen=(int) strlen(oc)-1;
    for(i=oclen;i>=0;i--)
    {
        if(oc[i]=='.')
        {
            k=j-1;
            continue;
        }
        nc[j++]=oc[i]-'0';
    }
    return k;
}
void multiply(int* a,int* b)
{
    memset(c,0,sizeof(c));
    int i,j;
    for(i=max;b[i]==0;i--);
    int lb=i;
    for(i=6;a[i]==0;i--);
    int la=i;
    len=la+lb;
    for(i=1;i<=la;i++)
        for(j=1;j<=lb;j++)
            c[i+j-1]=c[i+j-1]+a[i]*b[j];
    for(i=1;i<len;i++)
    {
        c[i+1]=c[i+1]+c[i]/10;
        c[i]=c[i]%10;
    }
    if(c[len]==0)
        len--;
}
int main()
{
    char s[7];
    int n;
    while(scanf("%s",s)!=EOF)
    {
        cin>>n;
        int a[7]={0},i,j;
        int p=dot(s,a);
        for(i=6;i>=0&&a[i]==0;i--);
        if(i==-1||n==0)
        {
            if(!n)
                cout<<1<<endl;
            else
                cout<<0<<endl;
            memset(c,0,sizeof(c));
            memset(temp,0,sizeof(temp));
            len=0;
            continue;
        }
        for(i=1;i<7;i++)
            c[i]=a[i];
        int ok=0;
        for(j=1;j<n;j++)
        {
            for(i=0;i<max;i++)
                temp[i]=c[i];
            multiply(a,temp);
            ok=1;
        }
        if(ok)
        {
            while(c[len]==0&&len>p*n)
                len--;
            for(i=len;i>p*n;i--)
                cout<<c[i];
            int down=1;
            while(c[down]==0&&down<=p*n)
                down++;
            if(down!=p*n+1&&p!=0)
                cout<<'.';
            for(i=p*n;i>=down;i--)
                cout<<c[i];
        }
        else
        {
            int up=6;
            while(c[up]==0&&up>p)
                up--;
            for(i=up;i>p;i--)
                cout<<c[i];
            int down=1;
            while(c[down]==0&&down<=p)
                down++;
            if(down!=p+1&&p!=0)
                cout<<'.';
            for(i=p;i>=down;i--)
                cout<<c[i];
        }
        cout<<endl;
        memset(c,0,sizeof(c));
        memset(temp,0,sizeof(temp));
        len=0;
    }
    return 0;
}
