//
//  main.cpp
//  Uva 10067 - Playing with Wheels
//
//  Created by S M HEMEL on 18/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>
#define N 1000000
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--) {
        int input,n;
        vector <int> v,ans;
        map <vector <int>, int> pressCnt;
        map <vector <int>, bool> visited;
        queue <vector <int> > q;
        for(int i=0; i<4; i++) {
            scanf("%d",&input);
            v.push_back (input);
        }
        pressCnt[v] = 0;
        q.push(v);
        for(int i=0; i<4; i++) {
            scanf ("%d", &input);
            ans.push_back (input);
        }
        scanf("%d",&n);
        for(int i=0; i<n; i++) {
            v.clear();
            for(int j=0; j<4; j++) {
                scanf("%d",&input);
                v.push_back (input);
            }
            visited[v] = true;
        }
        bool resultFound = false;
        while(!q.empty())
        {
            v.clear();
            v = q.front();
            q.pop();
            if(visited[v]) continue;
            visited[v] = true;
            if(v==ans) {
                resultFound = true;
                break;
            }
            vector <int> child = v;
            for(int i=0; i<4; i++) {
                child[i] = (child[i]+1)%10;
                if(!visited[child]) q.push (child);
                pressCnt[child] = pressCnt[v]+1;
                child = v;
            }
            for(int i=0; i<4; i++) {
                child[i] -= 1;
                if(child[i]==-1) child [i] = 9;
                if (!visited[child]) q.push(child);
                pressCnt[child] = pressCnt[v] + 1;
                child = v;
            }
        }
        if (resultFound) printf ("%d\n", pressCnt [ans]);
        else printf ("-1\n");
    }
    return 0;
}
