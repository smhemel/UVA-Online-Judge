//
//  main.cpp
//  Uva 11488 - Hyper Prefix Sets
//
//  Created by S M HEMEL on 2/22/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define N 500000
struct Node{
    int next[2];
    int count;
    int dep;
} trie[N];
int boundary = 1;
int main()
{
    int casecnt;
    cin >> casecnt;
    while (casecnt--) {
        int n;
        boundary = 1;
        memset(trie, 0, sizeof(trie));
        cin >> n;
        for(int i=1; i<=n; i++) {
            string s;
            cin >> s;
            int cur = 0;
            for(int i=0; i<s.size(); i++) {
                if (trie[cur].next[s[i]-'0'] == 0){
                    trie[cur].next[s[i]-'0'] = boundary;
                    boundary++;
                }
                cur = trie[cur].next[s[i]-'0'];
                trie[cur].count++;
                trie[cur].dep = i + 1;
            }
        }
        int res = 0;
        for(int i=1; i<boundary; i++)
            res = max(trie[i].dep*trie[i].count,res);
        cout << res << endl;
    }
    return 0;
}
