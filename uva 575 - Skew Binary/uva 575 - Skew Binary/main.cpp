//
//  main.cpp
//  uva 575 - Skew Binary
//
//  Created by S M HEMEL on 8/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n,i,sum,b,c;
    char s[100];
    while(scanf("%s",s))
    {
        if (strcmp(s, "0") == 0)
            return 0;
        
        sum = 0;
        n = strlen(s);
        for(i=0;i<n;i++)
        {
            c = pow(2,n-i)-1;
            b = (s[i]-'0')*c;
            sum = sum+b;
        }
        cout << sum << endl;
    }
    return 0;
}
