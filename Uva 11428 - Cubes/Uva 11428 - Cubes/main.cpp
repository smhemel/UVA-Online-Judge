//
//  main.cpp
//  Uva 11428 - Cubes
//
//  Created by S M HEMEL on 2/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int i, j = 0,qube_diff, flag;
    while (scanf("%d", &qube_diff))
    {   if(qube_diff==0)
        break;
        flag=0;
        for(i=1; i<60; i++)
        {
            for(j=0; j<=i; j++)
            {
                if(qube_diff==(i*i*i-j*j*j))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            printf("%d %d\n",i,j);
        else
            printf("No solution\n");
    }
    return 0;
}
