//
//  main.cpp
//  Uva 352 - The Seasonal War
//
//  Created by S M HEMEL on 2/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[100][100];
int dr[] = {0,0,1,1,1,-1,-1,-1};
int dc[] = {1,-1,0,1,-1,0,1,-1};
void floodfill(int n,int m)
{
    s[n][m] = 0;
    for(int i=0; i<8; i++)
    {
        int v = n+dr[i];
        int w = m+dc[i];
        if(s[v][w]=='1')
            floodfill(v,w);
    }
}
int main()
{
    int n,k=0;
    while (cin >> n)
    {
        k++;
        memset(s,0,sizeof(s));
        for(int i=0; i<n; i++)
            cin >> s[i];
        int count = 0;
        for(int i=0; i<n; i++)
            for(int l=0; l<n; l++)
            {
                if(s[i][l]=='1'){
                    floodfill(i,l);
                    count++;
                }
            }
        printf("Image number %d contains %d war eagles.\n",k,count);
    }
    return 0;
}
