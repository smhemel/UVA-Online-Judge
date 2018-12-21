//
//  main.cpp
//  Uva 784 - Maze Exploration
//
//  Created by S M HEMEL on 2/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<cstdio>
#include<cstring>
#define MAX 100
using namespace std;
char mat[MAX][MAX];
int X[8]= {-1,-1,-1,0,0,1,1,1};
int Y[8]= {-1,0,1,-1,1,-1,0,1};
int m = 0;
void dfs(int i,int j) {
    int vx,vy;
    mat[i][j]='#';
    for(int k=0; k<8; k++)
    {
        vx=i+X[k];
        vy=j+Y[k];
        if(mat[vx][vy]==' ')
            dfs(vx,vy);
    }
}
int main()
{
    int test,i,cou;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        m = -1;
        while(gets(mat[++m]))
            if(mat[m][0]=='_')
                break;
        cou =0;
        for(int i=0; i<m; i++)
        {
            int len = (int)strlen(mat[i]);
            for(int j=0; j<len; j++)
            {
                if(mat[i][j]=='*')
                {
                    dfs(i,j);
                    cou = 1;
                }
                if(cou==1) break;
            }
            if(cou==1) break;
        }
        for(i=0; i<=m; i++)
            printf("%s\n",mat[i]);
    }
}
