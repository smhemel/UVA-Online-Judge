//
//  main.cpp
//  10696 - f91
//
//  Created by S M HEMEL on 7/28/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b;
    while (scanf("%d",&a)==1 && a!=0)
    {
        if (a>100)
        {
            b = a-10;
        }
        else
            b=91;
        printf("f91(%d) = %d\n",a,b);
    }
    return 0;
}
