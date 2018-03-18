//
//  main.cpp
//  Uva 10305-Ordering Tasks
//
//  Created by S M HEMEL on 11/29/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include<iostream>
#include<algorithm>
#include<cmath>
#include <vector>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
int n,order[120][120],indegree[120],taken[120];
void topsort()
{
    vector<int>task;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(!taken[j] && !indegree[j])
            {
                taken[j]=1;
                task.push_back(j);
                for(int k=1;k<=n;k++)
                    if(order[j][k])
                        --indegree[k];
                break;
            }
        }
    }
    cout<<task[0];
    for(int i=1;i<n;i++)
        cout<<" "<<task[i];
    cout<<endl;
    task.clear();
}
int main()
{
    int a,b,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            order[a][b]=1;
            indegree[b]++;
        }
        topsort();
        clr(order);
        clr(indegree);
        clr(taken);
    }
    return 0;
}*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
#define N 101
vector<int> g[N];
int id, top[N], seen[N];

void DFS(int x)
{
    seen[x] = 1;
    cout << "visit = " <<x<<endl;
    for(size_t i=0; i<g[x].size(); i++)
        if(!seen[g[x][i]])
        {
            cout <<"x ="<<x<<" i = "<<i<< " paici = " <<g[x][i]<<endl;
            DFS(g[x][i]);
        }
    top[id--] = x;
    cout <<id <<" "<<x <<endl;
}
void top_sort(int n)
{
    memset(seen, 0, sizeof(seen));
    id = n-1;
    for(int i=0; i<n; i++){
        cout << "Jabe = "<< i << endl;
        if(!seen[i]) DFS(i);}
}
int main()
{
    int n, m, x, y;
    while(scanf("%d %d", &n, &m)==2 && (n>0 || m>0))
    {
        for(int i=0; i<n; i++)
            g[i].clear();
        for(int i=0; i<m; i++)
        {
            cin >> x >> y;
            x--,y--;
            g[x].push_back(y);
        }
        top_sort(n);
        for(int i=0; i<n; i++)
            printf("%d%c", ++top[i],(i==n-1) ? '\n':' ');
    }
    return 0;
}
