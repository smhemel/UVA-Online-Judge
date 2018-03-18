//
//  main.cpp
//  Uva - 443 - Humble Numbers
//
//  Created by S M HEMEL on 1/28/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include<stdio.h>
#define N 5843
#include <algorithm>
using namespace std;
long store[N];
void Humble_num()
{
    long int a,b,c,d,w,x,y,z;
    store[1] = a = b = c = d = 1;
    for(int i=2;i<N;i++)
    {
        w = 2*store[a];
        x = 3*store[b];
        y = 5*store[c];
        z = 7*store[d];
        store[i]= fmin(fmin(w,x),fmin(y,z));
        if(store[i]==w) a++;
        if(store[i]==x) b++;
        if(store[i]==y) c++;
        if(store[i]==z) d++;
    }
}
int main()
{
    int n;
    Humble_num();
    while(scanf("%d",&n) && n)
    {
        if(((n%100)==11) || ((n%100)==12) || ((n%100)==13)){
            printf("The %dth humble number is %ld.\n",n,store[n]);
            continue;
        }
        if((n%10)==1){
            printf("The %dst humble number is %ld.\n",n,store[n]);
            continue;
        }
        else if((n%10)==2){
            printf("The %dnd humble number is %ld.\n",n,store[n]);
            continue;
        }
        else if((n%10)==3){
            printf("The %drd humble number is %ld.\n",n,store[n]);
            continue;
        }
        else
            printf("The %dth humble number is %ld.\n",n,store[n]);
    }
    return 0;
}
