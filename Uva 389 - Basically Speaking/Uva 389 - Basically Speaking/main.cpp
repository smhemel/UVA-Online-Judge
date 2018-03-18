//
//  main.cpp
//  Uva 389 - Basically Speaking
//
//  Created by S M HEMEL on 11/17/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define uint64 unsigned long long
#define int64 long long
#define INF 500000000
#define N 100
using namespace std;

uint64 a, b;
char s[N];

int Value(char ch)
{
    if ('0' <= ch && ch <= '9')
        return (ch-48);
    else
        return (ch-55);
}

char Char(int val)
{
    if (0 <= val && val <=9)
        return (val+48);
    else
        return (val+55);
}

int main()
{
    while (cin >> s >> a >> b)
    {
        uint64 rs = 0;
        int len1 = (int)strlen(s);
        for (int i=0; i<len1; i++)
            rs = rs*a + Value(s[i]);
        int len = 0;
        while(rs)
        {
            s[len++] = Char(rs%b);
            rs /= b;
        }
        if (len>7)
            puts("  ERROR");
        else
        {
            if (len==0)
                s[len++] = '0';
            FOR(i, len, 6) printf(" ");
            for (int i=len-1; i>=0; i--)
                printf("%c", s[i]);
            printf("\n");
        }
    }
    return 0;
}
