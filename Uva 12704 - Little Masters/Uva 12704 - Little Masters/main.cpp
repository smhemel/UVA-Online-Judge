//
//  main.cpp
//  Uva 12704 - Little Masters
//
//  Created by S M HEMEL on 1/22/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#include<math.h>
int main()
{
    int test,a,b,c;
    float X,Y,length;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        length = sqrt(pow(a,2)+pow(b,2));
        X=c-length;
        Y=c+length;
        printf("%.2f %.2f\n",X,Y);
    }
    return 0;
}
