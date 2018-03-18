//
//  main.cpp
//  Uva 10324 - Zeros and Ones
//
//  Created by S M HEMEL on 23/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include<stdio.h>
using namespace std;
string s;
int main()
{
    long len,j,t,min,max,c=1;
    while(cin >> s)
    {
        len =(int)s.size();
        if(len==0)    break;
        scanf("%ld",&t); {
            for(int i=0; i<t; i++)
            {
                scanf("%ld%ld",&min,&max);
                if(i==0) printf("Case %ld:\n",c);
                if(min>max) swap(min,max);
                for(j=min; j<max; j++)
                    if(s[j]!=s[j+1])
                    {
                        printf("No\n");
                        break;
                    }
                if(j==max) printf("Yes\n");
            }
        }
        c++;
    }
    return 0;
}
