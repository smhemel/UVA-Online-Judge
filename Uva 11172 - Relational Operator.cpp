//
//  main.cpp
//  11172 - Relational Operator
//
//  Created by S M HEMEL on 7/26/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,n;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d%d",&a,&b);
        if (a<b)
            printf("<\n");
        else if (a>b)
            printf(">\n");
        else if(a==b)
            printf("=\n");
    }
    return 0;
}
