//
//  main.cpp
//  10931 Parity
//
//  Created by S M HEMEL on 9/18/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned long int n;
    int i,c,a[1000];
    while(scanf("%lu",&n)==1)
    {
        if(n==0) break;
        i = 0;
        while(n!=0)
        {
            a[i]=n%2;
            n/=2;
            i++;
        }
        c = 0;
        printf("The parity of ");
        for(i=i-1;i>=0;i--)
        {
            cout << a[i];
            if(a[i]==1)
                c++;
        }
        printf(" is %d (mod 2).\n",c);
    }
    return 0;
}
