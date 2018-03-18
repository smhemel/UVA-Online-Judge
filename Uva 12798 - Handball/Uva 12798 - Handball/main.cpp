//
//  main.cpp
//  Uva 12798 - Handball
//
//  Created by S M HEMEL on 1/22/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<stdio.h>
int main()
{
    int p,m,g,k,count;
    while(scanf("%d %d",&p,&m)==2)
    {
        count = 0;
        while(p--)
        {
            k=0;
            for(int i=0; i<m; i++)
            {
                scanf("%d",&g);
                if(g>0)
                    k++;
            }
            if(k==m)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
