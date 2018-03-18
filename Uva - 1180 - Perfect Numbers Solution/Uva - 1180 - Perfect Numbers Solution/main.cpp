//
//  main.cpp
//  Uva - 1180 - Perfect Numbers Solution
//
//  Created by S M HEMEL on 12/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int i;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n,i,y;
    int x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d,",&y);
        
        if(prime(y)==1)
        {
            x = pow(2,y)-1;
            if(prime(x)==1)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
    return 0;
}



/*#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    int p;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d,",&p);
        if( p == 2 || p == 3 || p == 5 || p == 7 || p == 13 || p == 17 || p == 19 )
            printf("Yes\n") ;
        else
            printf("No\n");
    }
    return 0;
}*/

