//
//  main.cpp
//  Uva 10193 - All You Need Is Love
//
//  Created by S M HEMEL on 6/5/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int Convert(char s[])
{
    int len = (int)strlen(s), rs = 0;
    for (int i=0; i<len; i++)
        rs = rs*2 + (s[i]-48);
    return rs;
}

int main()
{
    char s1[35], s2[35];
    int Case, n, m;
    scanf("%d", &Case);
    for (int i=1; i<=Case; i++)
    {
        scanf(" %s %s", s1,s2);
        n = Convert(s1);
        m = Convert(s2);
        printf("Pair #%d: ", i);
        if (__gcd(n,m)>1)
            puts("All you need is love!");
        else
            puts("Love is not all you need!");
    }
    return 0;
}
