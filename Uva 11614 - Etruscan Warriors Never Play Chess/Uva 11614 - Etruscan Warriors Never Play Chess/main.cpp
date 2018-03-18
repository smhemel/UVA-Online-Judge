//
//  main.cpp
//  Uva 11614 - Etruscan Warriors Never Play Chess
//
//  Created by S M HEMEL on 10/9/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

# include <stdio.h>
# include <math.h>
int main()
{
    long long i,n,t,sum;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        sum = (sqrt(1+8*n)-1)/2;
        printf("%lld\n",sum);
    }
    return 0;
}
