//
//  main.cpp
//  Uva 11965 - Extra Spaces
//
//  Created by S M HEMEL on 1/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
#define N 505
int main()
{
    int Case, n, m;
    char s[N];
    cin >> Case;
    for(int l=1; l<=Case; l++)
    {
        printf("Case %d:\n", l);
        cin >> m;
        getchar();
        while(m--)
        {
            gets(s);
            n = (int) strlen(s);
            if (n>0)
                printf("%c", s[0]);
            for(int i=1; i<n; i++)
            {
                if (s[i]!=' ')
                    printf("%c", s[i]);
                else
                {
                    if (s[i]!=s[i-1])
                        printf("%c", s[i]);
                }
            }
            n = 0;
            printf("\n");
        }
        if (l<Case)
            printf("\n");
    }
    return 0;
}
