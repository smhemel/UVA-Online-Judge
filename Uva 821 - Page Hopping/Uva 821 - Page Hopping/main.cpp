//
//  main.cpp
//  Uva 821 - Page Hopping
//
//  Created by S M HEMEL on 4/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int graph[105][105];
bool on[105];
int main() {
    int u, v, t=1;
    while(true){
        bool flag = true;
        memset(graph,63,sizeof graph);
        memset(on, false,sizeof on);
        while (cin >> u >> v && u && v) {
            flag = false;
            on[u] = true;on[v] = true;
            graph[u][v] = 1;
        }
        if(flag) break;
        for(int k=0; k<102; k++)
            for(int i=0; i<102; i++)
                for(int j=0; j<105; j++)
                    graph[i][j] = min(graph[i][j],graph[i][k] + graph[k][j]);
        double ans = 0, cnt = 0;
        for (int i=0; i<105; i++)
            for (int j=0; j<105; j++) {
                if(i==j) continue;
                if (on[i] && on[j]) {
                    ans += graph[i][j];
                    cnt++;
                }
            }
        printf("Case %d: average length between pages = %.3lf clicks\n",t++,ans/cnt);
    }
    return 0;
}
