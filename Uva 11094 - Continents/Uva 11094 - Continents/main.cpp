//
//  main.cpp
//  Uva 11094 - Continents
//
//  Created by S M HEMEL on 1/16/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//


#include<stdio.h>
#include<string.h>
#define MAX 21
char map[MAX][MAX],c;
int X[4]={-1,0,0,1};
int Y[4]={0,-1,1,0};
int color[MAX][MAX],n,m,pn,pm,p;
int dfs(int i,int j)
{
    int e,d,k;
    if(color[i][j]==0) {
        color[i][j]=1;
        p++;
    }
    for(k=0; k<4; k++) {
        e = i+X[k];
        d = (j+Y[k])%n;
        if(d<0)
            d = n-1;
        if(map[e][d]== c && color[e][d]==0)
            dfs(e,d);
    }
    return p;
}
int main()
{
    while(scanf("%d %d",&m,&n)==2)
    {
        getchar();
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                scanf(" %c",&map[i][j]);
        scanf("%d %d",&pm,&pn);
        c = map[pm][pn];
        dfs(pm,pn);
        int k=0,x;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            {
                p=0;
                if(map[i][j]==c && color[i][j]==0)
                {
                    x=dfs(i,j);
                    if(k<x)
                        k=x;
                }
            }
        printf("%d\n",k);
        memset(color,0,sizeof(color));
        memset(map,'\0',sizeof(map));
    }
    return 0;
}
