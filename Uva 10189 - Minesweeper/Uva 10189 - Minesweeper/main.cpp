//
//  main.cpp
//  Uva 10189 - Minesweeper
//
//  Created by S M HEMEL on 1/25/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    char field[100][101];
    int c,m,n,cas=1;
    while(scanf("%d%d",&n,&m) && (n||m))
    {
        if(cas>1)
            printf("\n");
        for(int i=0;i<n;i++)
            scanf("%s",field[i]);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(field[i][j]=='.')
                {
                    c = 0;
                    for(int k=i-1;k<=i+1;k++)
                        for(int l=j-1;l<=j+1;l++)
                            if(k>=0 && k<n&&l>=0 && l<m && field[k][l]=='*')
                                c++;
                    
                    field[i][j]=c+48;
                }
        printf("Field #%d:\n",cas++);
        for(int i=0;i<n;i++)
            printf("%s\n",field[i]);
    }
    return 0;
}
