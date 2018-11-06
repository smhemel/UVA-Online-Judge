//
//  main.cpp
//  UVA 11313 - Gourmet Games solution
//
//  Created by S M HEMEL on 21/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n , a ,b;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&a ,&b);
        if((a-1)%(b-1)!=0)
            printf("cannot do this\n");
        else
            printf("%d\n",(a-1)/(b-1));
    }
    return 0;
}
