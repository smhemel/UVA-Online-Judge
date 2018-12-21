//
//  main.cpp
//  Uva 612 - DNA Sorting
//
//  Created by S M HEMEL on 1/30/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
struct sequence {
    string ch;
    int measure;
} a[100+3];
int countMeasure (string p)
{
    int cnt = 0;
    for(int i=0; p[i]; i++)
        for(int j=i+1; p[j]; j++)
            if(p[i]>p[j])
                cnt++;
    return cnt;
}
bool cmp (sequence x, sequence y)
{
    if(x.measure<y.measure )
        return true;
    return false;
}
int main ()
{
    int testCase;
    scanf ("%d", &testCase);
    bool blank = false;
    while(testCase--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=0; i<m; i++)
        {
            cin >> a[i].ch;
            a[i].measure = countMeasure(a[i].ch);
        }
        stable_sort (a,a+m,cmp);
        if ( blank ) printf ("\n");
        blank = true;
        for ( int i = 0; i < m; i++ )
            cout << a [i].ch << endl;
    }
    return 0;
}




/*#include <stdio.h>
#include <stdlib.h>

typedef struct Value Value;
struct Value{
    int index;
    int meansure;
};

int cmp (const void *a, const void *b) {
    return ((Value*)a) -> meansure - ((Value *)b) -> meansure;
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        char map[110][110];
        Value v[110];
        int i, j, k, n, m, tmp;
        scanf("%d%d", &n, &m);
        getchar();
        for (i = 0; i < m; i++) {
            v[i].index = i;
            gets(map[i]);
        }
        for (i = 0; i < m; i++) {
            tmp = 0;
            for (j = 0; j < n; j++)
                for (k = j + 1; k < n; k++)
                    if (map[i][j] > map[i][k]) tmp++;
            v[i].meansure = tmp;
        }
        qsort(v, m, sizeof(Value), cmp);
        for (i = 0; i < m; i++)
            puts(map[v[i].index]);
        if (t)
            puts("");
    }
    return 0;
}*/

