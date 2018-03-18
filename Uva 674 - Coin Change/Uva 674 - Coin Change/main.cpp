//
//  main.cpp
//  Uva 674 - Coin Change
//
//  Created by S M HEMEL on 6/4/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
long long int way[8000];
int coin[] = {5,10,25,50};
void solve(){
    for(int i=0; i<7490; i++)
        way[i] = 1;
    for(int i=0; i<4; i++)
        for(int j=coin[i]; j<7490; j++)
            way[j] += way[j-coin[i]];
}
int main()
{
    solve();
    int n;
    while (cin >> n)
    {
        printf("%lld\n",way[n]);
    }
    return 0;
}
