//
//  main.cpp
//  Uva 10048 - Audiophobia
//
//  Created by S M HEMEL on 23/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <cstring>
#define inf  100009
using namespace std;
vector<int>G[11111], cost[11111];
int dis[11111],go;
void bfs(int start)
{
    queue <int> q;
    q.push(start);
    dis[start]=0;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        int len =(int)G[u].size();
        for(int i=0; i<len; i++) {
            int v = G[u][i];
            int temp = max(dis[u], cost[u][i]);
            if(temp<dis[v]) {
                dis[v]=temp;
                q.push(v);
            }
        }
    }
}

int main(){
    int cas=1,node,edges,u,v,w,start,q;
    while(cin >> node >> edges >> q && node && edges && q)
    {
        if(cas!=1)
            puts("");
        for(int i=0; i<edges; i++) {
            cin >> u >> v >> w;
            G[u].push_back(v);
            G[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        cout<<"Case #"<< cas++ <<endl;
        while(q--)
        {
            for(int i=1; i<=node; i++)
                dis[i]=inf;
            cin >> start >> go;
            bfs(start);
            if(dis[go]==inf || dis[go]==0)
                cout<<"no path"<<endl;
            else
                cout<<dis[go]<<endl;
        }
        for(int i=0; i<=node; i++) {
            G[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
