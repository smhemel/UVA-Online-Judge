//
//  main.cpp
//  Uva 10070 - Leap Year or Not Leap Year and ...
//
//  Created by S M HEMEL on 1/30/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[100001];
    int m4,m100,m400,m15,m55,count=0;
    while (scanf("%s",s)==1)
    {
        m4=0,m100=0,m15=0,m55=0,m400=0;
        if (count>0)
            printf("\n");
        count++;
        int l=(int)strlen(s);
        for (int i=0;i<l;i++)
        {
            m4=(m4*10+s[i]-'0')%4;
            m55=(m55*10+s[i]-'0')%55;
            m15=(m15*10+s[i]-'0')%15;
            m100=(m100*10+s[i]-'0')%100;
            m400=(m400*10+s[i]-'0')%400;
        }
        if ((!m4 && m100) || !m400)
        {
            printf("This is leap year.\n");
            if (!m15)
                printf("This is huluculu festival year.\n");
            if (!m55)
                printf("This is bulukulu festival year.\n");
        }
        else
        {
            if (!m15)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
