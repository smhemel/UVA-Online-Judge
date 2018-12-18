//
//  main.cpp
//  Uva 11934 - Magic Formula
//
//  Created by S M HEMEL on 2/6/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//



#include<stdio.h>
int main()
{
    
    long long a ,b ,c ,d ,L;
    
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)==5)
    {
        if(a==0&&b==0&&c==0&&d==0&&L==0)
            break;
        int count = 0;
        for(int i=0;i<=L;i++)
        {
            long long ans = (i*i*a)+(i*b)+c;
            if(ans%d==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
