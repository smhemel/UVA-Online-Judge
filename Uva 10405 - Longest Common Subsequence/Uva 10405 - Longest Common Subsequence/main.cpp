//
//  main.cpp
//  Uva 10405 - Longest Common Subsequence
//
//  Created by S M HEMEL on 12/3/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <string.h>
using namespace std;
int n,m,lcs[2000][2000];
int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        n=(int)s1.size();
        m=(int)s2.size();
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                    lcs[i][j]=lcs[i-1][j-1]+1;
                else
                    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        cout<<lcs[n][m]<<endl;
    }
    return 0;
}
