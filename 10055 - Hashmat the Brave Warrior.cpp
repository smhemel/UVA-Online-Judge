//
//  main.cpp
//  10055 - Hashmat the Brave Warrior
//
//  Created by S M HEMEL on 7/28/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
int main()
{
    long long int a,b;
    while (scanf("%lld%lld",&a,&b) !=EOF)
    {
        if (a>b)
            printf("%lld\n",a-b);
        else
            printf("%lld\n",b-a);
    }
    return 0;
}
