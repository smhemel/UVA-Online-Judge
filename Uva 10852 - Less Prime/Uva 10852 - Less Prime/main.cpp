//
//  main.cpp
//  Uva 10852 - Less Prime
//
//  Created by S M HEMEL on 6/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool check[6000];
void sieve(){
    int root = sqrt(6000)+1;
    for(int i=4; i<=6000; i+=2)
        check[i] = 1;
    for(int i=3; i<=root; i+=2)
        if(!check[i])
            for(int j = i*i; j<6000; j+= (i+i))
                check[j] = 1;
}
int main()
{
    sieve();
    int test,n;
    cin >> test;
    while (test--)
    {
        cin >> n;
        for(int i= (n/2)+1; ; i++)
            if(!check[i]){
                printf("%d\n",i);
                break;
            }
    }
    return 0;
}
