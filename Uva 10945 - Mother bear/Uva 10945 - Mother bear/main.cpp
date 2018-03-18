//
//  main.cpp
//  Uva 10945 - Mother bear
//
//  Created by S M HEMEL on 11/17/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int l1,bin;
    char s[1000],s1[1000];
    while(gets(s))
    {
        bin=0;
        l1=-1;
        int l=(int)strlen(s);
        if(l==4 && s[0]=='D' && s[1]=='O' && s[2]=='N' && s[3]=='E')
            break;
        for(int i=0;i<l;i++)
        {
            if(s[i]!='.' && s[i]!=',' && s[i]!='?' && s[i]!='!' && s[i]!=' ')
            {
                l1++;
                s1[l1]=s[i];
            }
        }
        for(int j=0;j<=l1;j++)
        {
            if(s1[j]!=s1[l1-j] && s1[j]!=(s1[l1-j]+32) && s1[j]!=(s1[l1-j]-32))
            {
                printf("Uh oh..\n");
                bin=1;
                break;
            }
        }
        if(bin==0)
            printf("You won't be eaten!\n");
    }
    return 0;
}
