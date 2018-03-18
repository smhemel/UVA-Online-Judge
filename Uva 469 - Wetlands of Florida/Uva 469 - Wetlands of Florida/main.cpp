//
//  main.cpp
//  Uva 469 - Wetlands of Florida
//
//  Created by S M HEMEL on 11/6/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<cstdio>
#include<cstring>
#include <sstream>
#define N 1001
using namespace std;
char letter[N][N];
int color[N][N],R,C,cnt;
int dr[]={0,0,0,1,1,1,-1,-1,-1};
int dc[]={0,1,-1,0,-1,1,1,-1,0};
void dfs(int i,int j)
{
    if(i<0 || j<0 || letter[i][j]=='\0')
        return;
    for(int l=0; l<9; l++)
    {
        int v = i+dr[l];
        int w = j+dc[l];
        //printf("v = %d w = %d\n",v,w);
        if(letter[v][w]=='W' && color[v][w] != 1){
            cnt++;
            //cout << v << w << endl;
            color[v][w] = 1;
            dfs(v,w);
        }
    }
    return;
}
int main()
{
    int cas,n,m;
    cin >> cas;
    getchar();
    getchar();
    for(int l=1; l<=cas; l++)
    {
        memset(letter,'\0',sizeof(letter));
        memset(color,0,sizeof(color));
        if(l!=1) cout <<endl;
        //k = 0;
        for(int i=0; ;i++)
        {
            gets(letter[i]);
            if(letter[i][0]=='\0')
                break;
            if(letter[i][0]!='W' && letter[i][0]!='L')
            {
                sscanf(letter[i],"%d %d",&n,&m);
                dfs(n-1,m-1);
                cout << cnt << endl;
                memset(color,0,sizeof(color));
                cnt = 0;
            }
        }
    }
    return 0;
}

