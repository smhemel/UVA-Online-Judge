//
//  main.cpp
//  Uva 260 - Il Gioco dell'X
//
//  Created by S M HEMEL on 2/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int dr [] = {-1, -1, 0, 0, 1, 1};
int dc [] = {-1, 0, -1, 1, 0, 1};
int n;
char a[205][205];
bool vis[205][205];
char output;
void dfs (int x, int y, char c)
{
    if(x<0 || y<0 || x==n || y==n || a[x][y]!=c || vis[x][y])
        return;
    if(y== n-1 && a[x][y] == 'w') { output = 'W'; return; }
    if(x== n-1 && a[x][y] == 'b') { output = 'B'; return; }
    vis[x][y] = true;
    for(int i=0; i<6; i++)
        dfs(x+dr[i], y+dc[i], c);
}
int main()
{
    int cases = 0;
    while ( cin >> n && n )
    {
        for(int i=0; i<n; i++)
            cin >> a[i];
        memset (vis, false, sizeof (vis));
        for(int i=0; i<n; i++)
            if(!vis[0][i] && a[0][i] == 'b')
                dfs(0, i, 'b');
        for(int i=0; i<n; i++)
            if(!vis[i][0] && a[i][0] == 'w' )
                dfs(i, 0, 'w');
        printf ("%d %c\n", ++cases, output);
    }
    return 0;
}
