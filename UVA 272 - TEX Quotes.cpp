//
//  main.cpp
//  272 - TEX Quotes
//
//  Created by S M HEMEL on 7/28/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#include<string.h>
int main()
{
    long int i,count=0,l;
    char s[100000];
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='"')
            {
                count++;
                if(count%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else 
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
