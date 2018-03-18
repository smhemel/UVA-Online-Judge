//
//  main.cpp
//  Uva 572 - Oil Deposits
//
//  Created by S M HEMEL on 12/9/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include <iostream>
#include <cstdio>
using namespace std;
int dr[] = {-1,-1,0, 1, 1, 1, 0,-1};
int dc[] = { 0, 1,1, 1, 0,-1,-1,-1};
char s[110][110];
int n,m;
void dfs(int p,int q)
{
    if(p<0 || p==n || q<0 || q==m || s[p][q]!='@')
        return;
    s[p][q] = '*';
    for (int i=0; i<8; i++)
        dfs(p+dr[i],q+dc[i]);
}
int main()
{
    while(cin >> n >> m)
    {
        if(n==0) break;
        int cnt=0;
        for(int i=0;i<n;i++)
            for(int j=0; j<m; j++)
                cin>>s[i][j];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(s[i][j]=='@')
                {
                    cnt++;
                    dfs(i,j);
                }
        cout << cnt <<endl;
    }
    return 0;
}*/



#include<iostream>
#include <vector>
using namespace std;
int m,n,cont;
vector <string> v;
string s;
bool visited[100][100];
int dr[]={1,1,1,-1,-1,-1,0,0};
int dc[]={1,0,-1,1,0,-1,1,-1};
void dfs(int a,int b)
{
    visited[a][b]=1;
    int p,q;
    for(int i=0;i<8;i++)
    {
        p=a+dr[i];
        q=b+dc[i];
        if(p>=0 && p<m && q>=0 && q<n && !visited[p][q])
        {
            visited[p][q]=1;
            if(v[p][q]=='@')
                dfs(p,q);
        }
    }
}
int main()
{
    while(1)
    {
        cin>>m>>n;
        if(m==0) break;
        v.clear();
        for(int i=0;i<m;i++) {
            cin >> s;
            v.push_back(s);
        }
        cont=0;
        memset(visited,0,sizeof(visited));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(!visited[i][j])
                {
                    visited[i][j]=1;
                    if(v[i][j]=='@')
                    {
                        cont++;
                        dfs(i,j);
                    }
                }
        cout<<cont<<endl;
    }
    return 0;
}
