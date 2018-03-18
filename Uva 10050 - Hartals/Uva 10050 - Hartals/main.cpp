//
//  main.cpp
//  Uva 10050 - Hartals
//
//  Created by S M HEMEL on 6/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int T,n,p,a[100];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&n,&p);
        for(int i=0; i<p; i++)
            scanf("%d",&a[i]);
        int ans = 0;
        for(int i=1; i<=n; i++){
            if(i%7==6 || i%7==0)
                continue;
            for(int j=0; j<p; j++)
                if(i%a[j]==0){
                    ans++;
                    break;
                }
        }
        printf("%d\n",ans);
    }
    return 0;
}
