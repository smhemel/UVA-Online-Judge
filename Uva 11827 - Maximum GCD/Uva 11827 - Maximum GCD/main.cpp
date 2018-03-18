//
//  main.cpp
//  Uva 11827 - Maximum GCD
//
//  Created by S M HEMEL on 10/25/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//


/*#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int num[100], n;

int gcd(int a,int b)
{
    return b ? gcd(b, a % b):a;
}
int calc()
{
    int i, j, max_ = 0;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            max_ = max(max_, gcd(num[i], num[j]));
    return max_;
}
int main()
{
    int t;
    char ch;
    cin >> t;
    while (t--)
    {
        n = 0;
        while (true)
        {
            cin >> num[n++];
            while ((ch = getchar()) == ' ');
            ungetc(ch, stdin);
            if (ch == 10 || ch == -1)
                break;
        }
        cout << calc() <<endl;
    }
    return 0;
}*/


/* ungetc.c -- pushes a character back on the stream */
/* int ungetc(int c, FILE *fp) */


#include <stdio.h>
int main(void)
{
    int ch;
    while ((ch = getchar()) != '1')
        putchar(ch);
    ungetc(ch, stdin);
    ch = getchar();
    putchar(ch);
    puts("");
    printf("Thank you!\n");
    return 0;
}




