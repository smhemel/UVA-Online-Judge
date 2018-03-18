//
//  main.cpp
//  Uva 12542 - Prime Substring
//
//  Created by S M HEMEL on 6/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cstdio>
#include<cmath>
#include <sstream>
#define ll long long int
using namespace std;
bool prime[1000001];
void is_prime()
{
    prime[1] = 1;
    int root = sqrt(1000000);
    for(int i=3; i<=root+1; i+=2)
        if(!prime[i])
            for(int j= i*i; j<=1000000; j += (i+i))
                prime[j] = 1;
}
int main()
{
    is_prime();
    string s;
    while(getline(cin,s))
    {
        if(s.compare("0")==0)
            break;
        int len = (int)s.size();
        ll p,Max=0;
        for(int i=0; i<len; i++)
        {
            for(int j=len; j>=i; j--)
            {
                istringstream buf(s.substr(i,j));
                buf >> p;
                if(p>100000)
                    continue;
                if((!prime[p] && p&1) || p==2)
                    if(Max<p)
                        Max=p;
            }
        }
        cout<<Max<<endl;
    }
    return 0;
}
