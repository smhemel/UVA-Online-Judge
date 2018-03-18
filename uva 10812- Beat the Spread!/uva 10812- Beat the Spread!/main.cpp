//
//  main.cpp
//  uva 10812- Beat the Spread!
//
//  Created by S M HEMEL on 9/1/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<stdio.h>
int main()
{
    long int t,a,b,c,d,i;
    while(scanf("%ld",&t)==1)
    {
        i=0;
        while(i<t)
        {
            scanf("%ld%ld",&a,&b);
            if(b>a||(a-b)%2!=0)
                printf("impossible\n");
            else
            {
                c=(a-b)/2;
                d=c+b;
                printf("%ld %ld\n",d,c);
            }
            i++;
        }
    }
    return 0;
}
