//
//  main.cpp
//  UVa 11244 Counting Stars
//
//  Created by S M HEMEL on 1/2/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int dim[8][2]={{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0}};
    int c,r,k,tx,ty,n;
    while(scanf("%d%d",&r,&c)==2 && r && c)
    {
        char star[101][101]={0};
        for(int i=0; i<r; i++)
            cin >> star[i];
        n=0;
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
            {
                int l=1;
                if(star[i][j]=='*')
                    for(l=0,k=0; k<8; k++)
                    {
                        tx=i+dim[k][0];
                        ty=j+dim[k][1];
                        if(tx>=0 && ty>=0 && tx<r && ty<c && star[tx][ty]=='*')
                            l++;
                    }
                if(l==0)
                    n++;
            }
        printf("%d\n",n);
    }
    return 0;
}
