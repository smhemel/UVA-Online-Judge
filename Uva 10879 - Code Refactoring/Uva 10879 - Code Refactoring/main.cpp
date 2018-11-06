//
//  main.cpp
//  Uva 10879 - Code Refactoring
//
//  Created by S M HEMEL on 5/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int testCase,k;
    scanf ("%d", &testCase);
    int cases = 0;
    while(testCase--) {
        scanf("%d", &k);
        int len = (int) sqrt (k);
        int output [4];
        int currentIndex = 0;
        for (int i=2; i<=len; i++)
            if(k%i==0) {
                output [currentIndex++] = i;
                output [currentIndex++] = k / i;
                if (currentIndex==4) break;
            }
        printf ("Case #%d: %d = %d * %d = %d * %d\n",
                ++cases, k, output [0], output [1], output [2], output [3]);
    }
    return 0;
}
