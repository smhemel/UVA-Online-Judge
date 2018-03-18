//
//  main.cpp
//  Uva 439 - Knight Moves
//
//  Created by S M HEMEL on 1/20/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<iostream>
#include <string>
#include <queue>
using namespace std;
int cost[100][100];
int check[100][100];
queue <int> Q;
int dr[]= {-2,-2,2,2,1,-1,1,-1};
int dc[]= {1,-1,1,-1,-2,-2,2,2};
int row, col,row1,col1;
void BFS(int r,int c)
{
    check[r][c]=1,cost[r][c]=0;
    Q.push(r);
    Q.push(c);
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        int v = Q.front();
        Q.pop();
        for(int i=0; i<8; i++)
        {
            int row=dr[i]+u;
            col=dc[i]+v;
            if(((row>=0&&row<8) && (col>=0&&col<8)) && check[row][col]==0)
            {
                check[row][col]=1;
                cost[row][col]=cost[u][v]+1;
                Q.push(row);
                Q.push(col);
            }
        }
    }
}
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        row = int(a[0]-96);
        col = a[1]-'0';
        row1=int(b[0]-96);
        col1=b[1]-'0';
        memset(cost,0,sizeof(cost));
        memset(check,0,sizeof(check));
        BFS(row-1,col-1);
        cout<<"To get from "<<a<<" to "<<b<<" takes "<<cost[row1-1][col1-1]<<" knight moves."<<endl;
    }
    return 0;
}
