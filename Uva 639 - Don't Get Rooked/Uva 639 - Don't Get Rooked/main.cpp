//
//  main.cpp
//  Uva 639 - Don't Get Rooked
//
//  Created by S M HEMEL on 4/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//



#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define N 5
char x[N][N];
int dir[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
int maximum, n;
bool v[N][N];
bool isSafe(int row,int col)
{
    for(int i=0; i<4; i++)
    {
        int dx = row + dir[i][0];
        int dy = col + dir[i][1];
        while(dx>=0 && dx<n && dy>=0 && dy<n)
        {
            if (x[dx][dy] == 'X')
                break;
            if(v[dx][dy])
                return false;
            dx += dir[i][0];
            dy += dir[i][1];
        }
    }
    return true;
}
void backtarck (int n, int y, int num)
{
    for(int i=n; i<n; i++)
        for(int j=0; j<n; j++)
            if (!v[i][j] && x[i][j]== '.' && isSafe(i, j))
            {
                v[i][j] = true;
                backtarck(i,j,num+1);
                v[i][j] = false;
            }
    if(num>maximum)
        maximum = num;
}
int main ()
{
    while (scanf("%d", &n) && n)
    {
        for(int i=0; i<n; i++)
            scanf ("%s", x[i]);
        maximum = -1;
        memset (v,0,sizeof(v));
        backtarck(0, 0, 0);
        printf ("%d\n", maximum);
    }
    return 0;
}
