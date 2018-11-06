//
//  main.cpp
//  U382 - Perfection Uva 382- Perfection
//
//  Created by S M HEMEL on 9/3/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,i,sum;
    cout << "PERFECTION OUTPUT" <<endl;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
                sum=sum+i;
        }
        if(sum==n)
        {
            printf("%5d  PERFECT\n",n);
        }
        else if(sum<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
        else
        {
            printf("%5d  ABUNDANT\n",n);
        }
    }
    cout <<"END OF OUTPUT" << endl;
    return 0;
}
