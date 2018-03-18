//
//  main.cpp
//  Uva 202 - Repeating Decimals
//
//  Created by S M HEMEL on 6/6/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include<cstdio>
using namespace std;
bool used[40000];
int stack[40000];
int main()
{
    int a,b,top,i,j;
    while(cin >> a >> b)
    {
        top = 0;
        printf("%d/%d = %d.", a, b, a / b);
        a %= b;
        a *= 10;
        while (!used[a])
        {
            stack[top++] = a;
            used[a] = 1;
            a %= b;
            a *= 10;
        }
        for (i = 0; stack[i] != a; i++)
            printf("%d", stack[i] / b);
        printf("(");
        j = i;
        for (; i < top && i < 50; i++)
            printf("%d", stack[i] / b);
        if (i < top)
            printf("...");
        printf(")\n");
        printf("   %d = number of digits in repeating cycle\n", top - j);
        printf("\n");
    }
    return 0;
}
