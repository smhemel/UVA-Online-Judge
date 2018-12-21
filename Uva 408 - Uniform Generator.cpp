//
//  main.cpp
//  Uva 408 - Uniform Generator
//
//  Created by S M HEMEL on 2/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//


#include <cstdio>
using namespace std;
int gcd(int a, int b)
{
    while (b){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main()
{
    int step, mod;
    while (scanf("%d%d",&step,&mod) != EOF){
        printf("%10d%10d    %s\n\n",step,mod,
               gcd(step,mod) == 1 ? "Good Choice":"Bad Choice");
    }
    return 0;
}
