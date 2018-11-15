//
//  main.cpp
//  Uva - 12502 - Three Families
//
//  Created by S M HEMEL on 2/5/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#include <math.h>
int main()
{
    int a,b,c,n,e;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        e = c*(a+(a-b))/(a+b);
        if(e<=0)
            printf("0\n");
        else
            printf("%d\n",e);
    }
    return 0;
}
