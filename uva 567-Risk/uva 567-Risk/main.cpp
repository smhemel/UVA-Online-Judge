//
//  main.cpp
//  uva 567-Risk
//
//  Created by S M HEMEL on 12/8/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<cstdio>
#include<iostream>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;
vector<int>graph[21];
int main()
{
    int i=1;
    int number,t=1;
    while(scanf("%d",&number)==1)
    {
        for(int j=1;j<=number;j++)
        {
            int c;
            scanf("%d",&c);
            graph[i].push_back(c);
            graph[c].push_back(i);
        }
        i++;
        if(i==20)
        {
            int query;i=1;
            scanf("%d",&query);
            printf("Test Set #%d\n",t++);
            for(int j=1;j<=query;j++)
            {
                int source,destination;
                
                int visit[25];
                memset(visit,0,sizeof visit);
                scanf("%d %d",&source,&destination);
                queue<int>q;
                q.push(source);
                visit[source]=1;
                while(!q.empty())
                {
                    int pop=q.front();
                    q.pop();
                    if(pop==destination)break;
                    for(int k=0;k<graph[pop].size();k++)
                    {
                        int v=graph[pop][k];
                        if(visit[v]==0)
                        {
                            visit[v]=1+visit[pop];
                            q.push(v);
                        }
                    }
                }
                printf("%2d to %2d: %d\n",source,destination,visit[destination]-1);
            }
            printf("\n");
            for(int i=1;i<=20;i++)graph[i].clear();
        }
    }
    return 0;
}
