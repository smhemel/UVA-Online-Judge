//
//  main.cpp
//  Uva 11953 - Battleships
//
//  Created by S M HEMEL on 12/9/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
int dr[] = {-1,-1,0, 1, 1, 1, 0,-1};
int dc[] = { 0, 1,1, 1, 0,-1,-1,-1};
using namespace std;
int n;
char mat[105][105];
void dfs (int p,int q)
{
    if (p<0 || p==n || q<0 || q==n || mat[p][q]=='.')
        return;
    mat[p][q] = '.';
    for(int i=0; i<8; i+=2)
        dfs(p+dr[i],q+dc[i]);
}
int main ()
{
    int test;
    scanf ("%d",&test);
    int cases = 0;
    while (test--)
    {
        scanf ("%d", &n);
        for (int i=0; i<n; i++)
            scanf ("%s", mat[i]);
        int cnt = 0;
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                if (mat[i][j] =='x') {
                    cnt++;
                    dfs(i,j);
                }
        printf ("Case %d: %d\n", ++cases, cnt);
    }
    return 0;
}
