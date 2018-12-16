//
//  main.cpp
//  Uva 10392 - Factoring Large Numbers
//
//  Created by S M HEMEL on 2/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int prime[80000];
    bool check[1000000];
    int l = 0;
    prime[l++] = 2;
    int root = sqrt(1000000);
    for(int i=3; i<=root; i+=2)
        if(!check[i])
            for(int j = i*i; j<=1000000; j+= i+i)
                check[j] = 1;
    for(int i=3; i<=1000000; i+=2)
        if(!check[i])
            prime[l++] = i;
    long long int N;
    while (scanf("%lld",&N)){
        if (N < 0) break;
        
        for(int i=0; i<l; i++){
            while (N % prime[i] == 0){
                printf("    %d\n",prime[i]);
                N /= prime[i];
            }
            if (N == 1)
                break;
        }
        if (N != 1)
            printf("    %lld\n",N);
        printf("\n");
    }
    return 0;
}
