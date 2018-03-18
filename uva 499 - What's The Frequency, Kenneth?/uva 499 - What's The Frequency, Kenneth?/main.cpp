//
//  main.cpp
//  uva 499 - What's The Frequency, Kenneth?
//
//  Created by S M HEMEL on 9/22/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
    char s[100000];
    int a[125];
    while (gets(s))
    {
        memset(a,0,sizeof(a));
        int l=(int)strlen(s);
        for (int i=0;i<l;i++)
        {
            if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' &&s[i]<='z'))
                a[s[i]]++;
        }
        int max=0;
        for (int i=65;i<123;i++)
            if (max<a[i])
                max=a[i];
        for (int i=65;i<123;i++)
            if (a[i]==max)
                printf("%c",i);
        printf(" %d\n",max);
    }
    return 0;
}
