//
//  main.cpp
//  Uva 782 - Contour Painting
//
//  Created by S M HEMEL on 2/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <cstdio>
#include <cstring>
using namespace std;
char matrix[35][85];
bool vis[35][85];
int dr[] = {1, 0, -1, 0};
int dc[] = {0, 1, 0, -1};
int line;
void setup() {
    for(int i=0; i<35; i++) {
        for(int j=0; j<84; j++) {
            if(matrix[i][j] != 'X' && matrix[i][j] != '*' && matrix[i][j] != '_')
                matrix[i][j] = ' ';
        }
        matrix[i][84] = '\0';
    }
}
void reverseSetup() {
    for(int i=34; i>=0; i--) {
        bool foundLine = false;
        for(int j=83; j>=0; j--) {
            if(matrix[i][j] == 'X' || matrix[i][j] == '#' || matrix[i][j] == '_') {
                matrix[i][j+1] = '\0';
                foundLine = true;
                break;
            }
        }
        if(!foundLine)
            matrix[i][0] = '\0';
    }
}
bool isValid(int x,int y) {
    if(x<0 || y<0 || matrix[x][y]=='\0' || x==line || matrix[x][y]=='#' || vis[x][y])
        return false;
    return true;
}
void dfs(int x,int y)
{
    vis[x][y] = true;
    for(int i=0; i<4; i++) {
        int nx = x + dr[i];
        int ny = y + dc[i];
        if(isValid(nx, ny)) {
            if(matrix[nx][ny] == 'X')
                matrix[x][y] = '#';
            else
                dfs(nx,ny);
        }
    }
}
int main ()
{
    int testCases;
    scanf("%d", &testCases);
    getchar();
    while(testCases--)
    {
        while(gets(matrix[0]))
        {
            line = 1;
            while(gets(matrix[line])) {
                if(matrix[line][0] == '_') break;
                line++;
            }
            setup();
            for(int i=0; i<line; i++)
                for(int j=0; j<strlen(matrix[i]); j++)
                    if(matrix[i][j] == '*') {
                        matrix[i][j] = ' ';
                        memset(vis, false, sizeof(vis));
                        dfs(i,j);
                    }
            reverseSetup();
            for(int i=0; i<=line; i++)
                printf ("%s\n", matrix[i]);
            memset(matrix,NULL,sizeof(matrix));
        }
    }
    return 0;
}
