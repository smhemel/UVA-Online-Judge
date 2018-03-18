//
//  main.cpp
//  Uva 594 - One Little, Two Little, Three Little Endians
//
//  Created by S M HEMEL on 6/20/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n,i;
    while(scanf("%d", &n)!=EOF) {
        int y = 0;
        for(i=0; i<4; i++)
            y = (y<<8)|((n>>(8*i))&255);
        printf("%d converts to %d\n", n, y);
    }
    return 0;
}
