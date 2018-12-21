//
//  main.cpp
//  Uva 871 - Counting Cells in a Blob
//
//  Created by S M HEMEL on 2/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<string.h>
#define MAX 26
using namespace std;
int dr[8]= {-1,-1,-1,0,0,1,1,1};
int dc[8]= {-1,0,1,-1,1,-1,0,1};
char gird[MAX][MAX];
int color[MAX][MAX];
int row,n,p;
int dfs(int i,int j)
{
    if(color[i][j]==0) {
        p++;
        color[i][j]=1;
    }
    for(int k=0; k<8; k++)
    {
        int v=i+dr[k];
        int w=j+dc[k];
        if(v>=0 && v<row && w>=0 && w<=n && gird[v][w]=='1')
            if(color[v][w]==0)
                dfs(v,w);
    }
    return p;
}
int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    getchar();
    for(int t=0; t<test; t++)
    {
        memset(gird,'\0',sizeof(gird));
        memset(color,0,sizeof(color));
        if(t) cout << endl;
        row =-1;
        while(gets(gird[++row]))
        {
            int len = (int) strlen(gird[row]);
            if(len==0)
                break;
        }
        int max=0;
        for(int i=0; i<row; i++)
        {
            n =(int) strlen(gird[i]);
            for(int j=0; j<n; j++)
            {
                p = 0;
                if(gird[i][j]=='1' && color[i][j]==0)
                {
                    int ans =dfs(i,j);
                    if(max<ans)
                        max=ans;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
