//
//  main.cpp
//  446 - Kibbles "n" Bits "n" Bits "n" Bits
//
//  Created by S M HEMEL on 10/10/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//
#include <iostream>
#include<cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        char op[3], bin1[13], bin2[13];
        scanf("%X%s%X", &a, op, &b);
        if (op[0] == '+')
            c = a + b;
        else
            c = a - b;
        for (int i = 0; i < 13; i++)
        {
            bin1[i] = (a % 2) + '0';
            a /= 2;
        }
        for (int i = 0; i < 13; i++)
        {
            bin2[i] = (b % 2) + '0';
            b /= 2;
        }
        
        for (int i = 12; i >= 0; i--)
            putchar(bin1[i]);
        putchar(' ');
        putchar(op[0]);
        putchar(' ');
        for (int i = 12; i >= 0; i--)
            putchar(bin2[i]);
        printf(" = %d\n", c);
    }
    return 0;
}
