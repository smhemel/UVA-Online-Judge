//
//  main.cpp
//  Uva 13012 Identifying tea
//
//  Created by S M HEMEL on 8/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m,i,cnt=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0,cnt=0; i<5; i++)
        {
            cin >> m;
            if(m==n)
                cnt++;
        }
        cout << cnt <<endl;
    }
    return 0;
}
