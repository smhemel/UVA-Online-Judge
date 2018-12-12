//
//  main.cpp
//  Uva 10229 - Modular Fibonacci
//
//  Created by S M HEMEL on 1/29/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#include<math.h>


long long Fib(long long n , long long m)
{
    long long i , k , h , t , j;
    i = h = 1;
    j = k = 0;
    while (n > 0)
    {
        if (n%2 == 1)
        {
            t = (j%m*h%m) % m;
            j = ((i%m*h%m) % m + (j%m*k%m) % m + t % m) % m;
            i = ((i%m*k%m)%m + t%m);
        }
        t = (h%m*h%m)%m;
        h = ((2*k%m*h%m)%m + t%m)%m;
        k = ((k%m*k%m)%m + t%m)%m;
        n = (long long) n/2;
    }
    return j;
}


int main()
{
    long long n , m , p  , res;
    while(scanf("%lld%lld" , &n , &m) == 2)
    {
        p = (long long) pow(2 , m);
        
        
        res = Fib(n , p);
        printf("%lld\n" , res);
    }
    return 0;
}
