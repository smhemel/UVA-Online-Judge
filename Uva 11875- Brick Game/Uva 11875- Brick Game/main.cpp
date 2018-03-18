//
//  main.cpp
//  Uva 11875- Brick Game
//
//  Created by S M HEMEL on 11/10/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n,test,a[100],j;
    while(cin >> test)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d",&n);
            for(j=0;j<n;j++)
                scanf("%d",&a[j]);
            printf("Case %d: %d\n",i,a[j/2]);
        }
    }
    return 0;
}
