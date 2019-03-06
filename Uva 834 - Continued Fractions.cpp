//
//  main.cpp
//  Uva 834 - Continued Fractions
//
//  Created by S M HEMEL on 2/6/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//



#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF){
        printf("[%d;",a/b);
        a %= b;
        while(a!=1){
            printf("%d,",b/a);
            b %= a;
            swap (a,b);
        }
        printf("%d]\n",b);
    }
    return 0;
}
