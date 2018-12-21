//
//  main.cpp
//  Uva 785 - Grid Colouring
//
//  Created by S M HEMEL on 2/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;
char s[100][100];
int line;
int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};
char c;
void dfs(int i,int l)
{
    for(int j=0; j<4; j++) {
        int v = i+dr[j];
        int w = l+dc[j];
        if(s[v][w]!=c && s[v][w]!='X') {
            s[v][w] = c;
            dfs(v,w);
        }
    }
    return;
}
int main()
{
    while (gets(s[0])) {
        line = 1;
        while (gets(s[line])) {
            if (s[line] [0] == '_') break;
            line++;
        }
        for(int i=0; i<line; i++) {
            int len = (int) strlen(s[i]);
            for(int l=0; l<len; l++) {
                if(s[i][l] != 'X' && s[i][l] != ' '){
                    c = s[i][l];
                    dfs(i,l);
                    s[i][l] = c;
                }
            }
        }
        for(int i=0; i<=line; i++)
            cout << s[i] <<endl;
    }
    return 0;
}
