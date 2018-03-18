//
//  main.cpp
//  Uva 11388 - GCD LCM
//
//  Created by S M HEMEL on 11/21/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    long long G,L,a,b;
    int nCases;
    scanf("%d",&nCases);
    while(nCases--)
    {
        a=b=1;
        scanf("%lld %lld",&G,&L);
        int factor;
        factor=1;
        bool check;
        check=true;
        while(check&&a<=L)
        {
            a=G*factor;
            factor++;
            b=(G*L)/a;
            if(b%G==0&&L%b==0)
                check=false;
        }
        if(!check)
            printf("%lld %lld\n",a,b);
        else printf("-1\n");
        
    }
    return 0;
}
