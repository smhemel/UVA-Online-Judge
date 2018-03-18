//
//  main.cpp
//  Uva 350- pseudo-random numbers
//
//  Created by S M HEMEL on 11/7/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<algorithm>
#include<iostream>
#include <map>
using namespace std;
int main()
{
    long long z,i,m,l,cas=1;
    while(cin>>z>>i>>m>>l)
    {
        if(z==0&&i==0&&m==0&&l==0) break;
        long long total,count=0;
        map<long long,int>mp;
        while(1)
        {
            total=((z*l)+i)%m;
            mp[total]++;
            if(mp[total]==2)
                break;
            l=total;
            count++;
        }
        cout << "Case " << cas << ": "<< count <<endl;
        cas++;
    }
    return 0;
}
