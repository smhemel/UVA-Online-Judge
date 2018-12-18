//
//  main.cpp
//  Uva 343 - What Base Is This?
//
//  Created by S M HEMEL on 1/29/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#define ll long long int
using namespace std;
int find(char *a)
{
    int res=0;
    int n = (int)strlen(a);
    for(int i=0;i<n;i++)
    {
        if(a[i]<='9'&& a[i]>='0')
            res = max(res,a[i]-'0');
        else
            res = max(res,(a[i]-'A'+10));
    }
    return res+1;
}
ll calc(char *a,int base)
{
    ll res=0,pow=1;
    int n = (int)strlen(a)-1;
    for(int i=n; i>=0; i--)
    {
        if(a[i]<='9' && a[i]>='0')
            res=res+pow*(a[i]-'0');
        else
            res=res+pow*(a[i]-'A'+10);
        pow*=base;
    }
    return res;
}
int main()
{
    char a[100],b[100];
    ll f,s;
    bool found=false;
    while(scanf("%s%s",&a,&b)!=EOF)
    {
        long long int i=max(2,find(a));
        long long int j=max(2,find(b));
        s=f=0;
        found=false;
        while(i<=36 && j<=36)
        {
            f = calc(a,i);
            s = calc(b,j);
            if(f==s)
            {
                found=true;
                printf("%s (base %lld) = %s (base %lld)\n",a,i,b,j);
                break;
            }
            else if(f<s)
                i++;
            else
                j++;
        }
        if(!found)
            printf("%s is not equal to %s in any base 2..36\n",a,b);
    }
    return 0;
}
