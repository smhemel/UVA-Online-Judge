//
//  main.cpp
//  Uva 532 - Dungeon Master
//
//  Created by S M HEMEL on 19/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <queue>
using namespace std;
char dungeon[32][32][32];
int dis[32][32][32];
int L, R, C;
const int direction[6][3] = {{-1,0,0},{1,0,0},{0,-1,0},{0,1,0},{0,0,-1},{0,0,1}};
struct data {
    int x;
    int y;
    int z;
};
int BFS(int i, int j, int k)
{
    dis[i][j][k] = 0;
    queue<data> q;
    q.push(data{i,j,k});
    dungeon[i][j][k] = '#';
    data cur, nxt;
    while(!q.empty()){
        cur = q.front();
        q.pop();
        for(int i=0; i<6; i++){
            nxt.x = cur.x + direction[i][0];
            nxt.y = cur.y + direction[i][1];
            nxt.z = cur.z + direction[i][2];
            if(nxt.x<0 || nxt.x>=L || nxt.y<0 || nxt.y>=R || nxt.z<0 || nxt.z>=C) continue;
            if(dungeon[nxt.x][nxt.y][nxt.z] != '#'){
                dis[nxt.x][nxt.y][nxt.z] = dis[cur.x][cur.y][cur.z] + 1;
                if(dungeon[nxt.x][nxt.y][nxt.z] == 'E')
                    return dis[nxt.x][nxt.y][nxt.z];
                dungeon[nxt.x][nxt.y][nxt.z] = '#';
                q.push(nxt);
            }
        }
    }
    return -1;
}
int main()
{
    while(scanf("%d%d%d", &L, &R, &C) && L && R && C){
        data store;
        for(int i= 0; i < L; ++i)
            for(int j=0; j<R; j++){
                scanf("%s",dungeon[i][j]);
                    for(int k=0; k<C; ++k)
                        if(dungeon[i][j][k]=='S')
                            store = {i,j,k};
            }
        int minute = BFS(store.x,store.y,store.z);
        if (minute != -1) printf("Escaped in %d minute(s).\n", minute);
        else printf("Trapped!\n");
    }
    return 0;
}
