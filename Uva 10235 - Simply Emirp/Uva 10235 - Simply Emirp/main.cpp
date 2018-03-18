//
//  main.cpp
//  Uva 10235 - Simply Emirp
//
//  Created by S M HEMEL on 11/16/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int is_prime (long int x)
{
    int i;
    for ( i=2; i*i<=x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int rev(unsigned int n)
{
    unsigned int r = 0;
    while (n!=0)
    {
        int z = n%10;
        r = r*10 + z;
        n /= 10;
    }
    return r;
}
int main()
{
    unsigned long int n;
    while(cin >> n)
    {
        if (is_prime(n)!=1)
            printf ("%ld is not prime.\n", n);
        else
        {
            int n1=rev(n);
            if ( is_prime(n1)==1 && n1!=n )
                printf ("%ld is emirp.\n",n);
            
            else
                printf ("%ld is prime.\n",n);
        }
    }
    return 0;
}
