//
//  main.cpp
//  Uva 10473 - Simple Base Conversion
//
//  Created by S M HEMEL on 10/8/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long a;
    char b[35];
    while(gets(b))
    {
        if(b[0]=='0' && b[1]=='x')
        {
            a = strtol(b,NULL,16);
            printf("%ld\n",a);
        }
        else
        {
            a = atol(b);
            if(a<0)
                break;
            else
                printf("0x%lX\n",a);
        }
    }
    return 0;
}
