//
//  main.cpp
//  Uva 10346 - Peter's Smokes
//
//  Created by S M HEMEL on 11/9/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n,k,count,res;
    while((cin >> n >> k) && k>1)
    {
        count=0;
        res=0;
        while(n>0)
        {
            count+=n;
            res+=n;
            n=res/k;
            res%=k;
        }
        cout << count <<endl;
    }
    return 0;
}
