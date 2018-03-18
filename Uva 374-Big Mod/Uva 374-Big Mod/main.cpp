//
//  main.cpp
//  Uva 374-Big Mod
//
//  Created by S M HEMEL on 10/7/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int mod(long b, long p, long m)
{
    if(p==0)
        return 1;
    if(p%2==0)
        return (mod(b,p/2,m)*mod(b,p/2,m))%m;
    
    return ((mod(b,p-1,m)*(b%m))%m);
}
int main()
{
    int b,p,m;
    while((cin >> b >> p >> m))
        cout << mod(b,p,m) <<endl;
    return 0;
}
