//
//  main.cpp
//  Uva 357 - Let Me Count The Ways
//
//  Created by S M HEMEL on 11/18/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#define N 30001
using namespace std;
unsigned long long way[N];
int coin[] = {1,5,10,25,50};
int main()
{
    way[0] = 1;
    for (int c=0; c<5; c++)
    {
        for (int i=coin[c]; i<N; ++i)
            way[i] += way[i - coin[c]];
        
    }
    int cent;
    while (cin >> cent)
    {
        if (cin.eof()) break;
        if (way[cent] == 1)
            cout << "There is only 1 way to produce " << cent << " cents change.\n";
        else
            cout << "There are " << way[cent] << " ways to produce " << cent << " cents change.\n";
    }
    return 0;
}
