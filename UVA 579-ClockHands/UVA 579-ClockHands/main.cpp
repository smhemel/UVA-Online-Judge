//
//  main.cpp
//  UVA 579-ClockHands
//
//  Created by S M HEMEL on 9/7/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double h,m,t,i,j;
    while(scanf("%lf:%lf", &h, &m)==2)
    {
        if(h==0 && m==0)
            break;
        i=((h*30)+(m/2));
        j=(m*6);
        t=i-j;
        if(t<0)
            t*=-1;
        if(t>180)
            t=360-t;
        printf("%.3lf\n",t);
    }
    return 0;
}
