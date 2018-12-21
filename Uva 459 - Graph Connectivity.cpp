//
//  main.cpp
//  Uva 459 - Graph Connectivity
//
//  Created by S M HEMEL on 2/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
using namespace std;
bool visit[30];
vector <int> adj[30];
void dfs(int node)
{
    visit[node]=1;
    for(int i=0; i<adj[node].size(); i++)
    {
        int v =adj[node][i];
        if(!visit[v])
            dfs(v);
    }
    return;
}
int main()
{
    int test,cnt;
    char s[4];
    cin >> test;
     scanf("\n");
    while(test--)
    {
        gets(s);
        int n = s[0]-'A';
        memset(visit,0,sizeof(visit));
        for(int i=0; i<=n; i++)
            adj[i].clear();
        while(gets(s) && s[0]) {
            adj[s[0]-'A'].push_back(s[1]-'A');
            adj[s[1]-'A'].push_back(s[0]-'A');
        }
        cnt=0;
        for(int i=0; i<=n; i++)
            if(!visit[i])
                dfs(i), cnt++;
        cout << cnt <<endl;
        if(test)
            cout<<endl;
    }
    return 0;
}
