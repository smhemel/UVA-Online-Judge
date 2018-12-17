//
//  main.cpp
//  Uva 10946 - You want what filled?
//
//  Created by S M HEMEL on 2/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

/*#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <iterator>
using namespace std;
char s[60][60];
int store[26],cnt;
map <int,int> M;
map<int,int>::iterator it;
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] = {0,1,-1,0,1,-1,0,1,-1};
void dfs(int i, int l,char c)
{
    if(i<0 || l<0 || s[i][l]=='\0')
        return;
    for(int j=0; j<9; j++)
    {
        int v = i+dr[j];
        int w = l+dc[j];
        if(s[v][w]==c)
        {
            s[v][w] = '.';
            cnt++;
            dfs(v,w,c);
        }
    }
    return;
}
template <typename A, typename B>
multimap<B, A> flip_map(map<A,B> & src) {
    
    multimap<B,A> dst;
    
    for(typename map<A, B>::const_iterator it = src.begin(); it != src.end(); ++it)
        dst.insert(pair<B, A>(it -> second, it -> first));
    
    return dst;
}
int main()
{
    int n,m;
    while (cin >> n >> m && n && m)
    {
        for(int i=0; i<n; i++)
            cin >> s[i];
        for(int i=0; i<n; i++)
            for(int l=0; l<m; l++)
            {
                cnt = 0;
                int f = 0;
                char c;
                if(s[i][l] != '.') {
                    f = s[i][l]-'A';
                    c = s[i][l];
                    dfs(i,l,c);
                }
                if(cnt)
                    M[f] = cnt;
            }
        multimap<int,int> reverseTest = flip_map(M);
        for(multimap<int,int>::const_reverse_iterator it=reverseTest.rbegin(); it != reverseTest.rend(); ++it)
            printf("%c %d\n",(it->second+65),it -> first);
           // cout << it -> first << " " << it->second << endl;
        for(int i=0; i<26; i++)
            if(M[i])
                printf("%c %d\n",(65+i),M[i]);
    }
    return 0;
}*/




#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <iterator>
#include <vector>
using namespace std;
char s[60][60];
int cnt;
vector < pair<char,int>> M;
int dr[] = {0,0,0,1,-1};
int dc[] = {0,1,-1,0,0};
void dfs(int i, int l,char c)
{
    if(i<0 || l<0 || s[i][l]=='\0')
        return;
    for(int j=0; j<5; j++)
    {
        int v = i+dr[j];
        int w = l+dc[j];
        if(s[v][w]==c)
        {
            s[v][w] = '.';
            cnt++;
            dfs(v,w,c);
        }
    }
    return;
}
bool comp(pair<char,int> a, pair<char,int> b){
    if(a.second!= b.second)
        return a.second>b.second;
    else
        return a.first<b.first;
}
int main()
{
    int n,m,tc=0;
    while (cin >> n >> m && n && m)
    {
        M.clear();
        tc++;
        for(int i=0; i<n; i++)
            cin >> s[i];
        for(int i=0; i<n; i++)
            for(int l=0; l<m; l++)
            {
                cnt = 0;
                int f = 0;
                char c;
                if(s[i][l] != '.') {
                    f = s[i][l]-'A';
                    c = s[i][l];
                    dfs(i,l,c);
                }
                if(cnt)
                    M.push_back(make_pair(c,cnt));
            }
        sort(M.begin(),M.end(),comp);
        printf("Problem %d:\n", tc);
        for(int k=0; k<M.size(); k++)
            printf("%c %d\n",M[k].first, M[k].second);
    }
    return 0;
}
