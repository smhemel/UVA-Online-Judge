//
//  main.cpp
//  Uva 264 - Count on Cantor
//
//  Created by S M HEMEL on 1/18/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<cstdio>
using namespace std;
int n,value,i,a,b;
int main()
{
    while(scanf("%d",&n)==1)
    {
        value = n;
        for(i=1; i<value; i++)
            value -= i;
        if(i%2)
            a = 1+i-value;
        else
            a = value;
        b = i-a+1;
        printf("TERM %d IS %d/%d\n", n, a, b);
    }
    return 0;
}
