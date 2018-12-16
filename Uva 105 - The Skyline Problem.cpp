//
//  main.cpp
//  Uva 105 - The Skyline Problem
//
//  Created by S M HEMEL on 2/3/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int H[10005];
int main()
{
    int l, h, r,min = 500000, max = 0;
    while(scanf("%d%d%d",&l,&h,&r)!=EOF)
    {
        for(int i=l; i<=r; i++)
            H[i] = H[i] > h ? H[i] : h;
        if(min>l)
            min = l;
        if(max<r)
            max = r;
    }
    printf("%d %d", min, H[min]);
    for(int i=min+1; i<=max+2; i++)
        if(H[i] != H[i-1]) {
            if(H[i-1]<H[i])
                printf(" %d %d",i,H[i]);
            else
                printf(" %d %d",i-1,H[i]);
        }
    printf("\n");
    return 0;
}
