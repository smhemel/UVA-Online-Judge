//
//  main.cpp
//  Uva 12895 - Armstrong Number
//
//  Created by S M HEMEL on 2/22/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    while (tc--)
    {
        char s[15];
        gets(s);
        int b,l=(int) strlen(s);
        long long int n,a;
        n=a=0;
        for (int i=0;i<l;i++)
        {
            b=s[i]-'0';
            a+=pow(b,l);
            n=n*10+b;
        }
        if (a==n) printf("Armstrong\n");
        else printf("Not Armstrong\n");
    }
    return 0;
}
