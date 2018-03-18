//
//  main.cpp
//  Uva 640 - Self Numbers
//
//  Created by S M HEMEL on 1/26/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char x[1000001];
using namespace std;
int main()
{
    for(int i=1; i<=999999; i++)
    {
        int m = i, sum = 0;
        while(m) {
            sum += m%10;
            m /= 10;
        }
        if(sum+i <= 1000000)
            x[sum+i] = 1;
    }
    for(int i=1; i<=1000000; i++)
        if(!x[i])
            printf("%d\n", i);
    return 0;
}
