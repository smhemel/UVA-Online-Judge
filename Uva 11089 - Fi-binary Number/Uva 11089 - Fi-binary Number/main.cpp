//
//  main.cpp
//  Uva 11089 - Fi-binary Number
//
//  Created by S M HEMEL on 11/18/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int F[45] = {1,2},t,n;//Fi-binary number
    for(int i = 2; i < 45; i++)
        F[i] = F[i-1] + F[i-2];
    cin >> t;
    while(t--)
    {
        cin >> n;
        int i = 44;
        while(F[i] > n)
            i--;
        for(; i>= 0; i--)
        {
            if(F[i] <= n)
                printf("1"), n -= F[i];
            else
                printf("0");
        }
        puts("");
    }
    return 0;
}
