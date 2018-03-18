//
//  main.cpp
//  11479 - Is this the easiest problem?
//
//  Created by S M HEMEL on 11/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    long int t,a,b,c,i;
    while(cin >> t)
    {
        i=1;
        while(i<=t)
        {
            cin >> a >> b >> c;
            if((a+b)<=c || (b+c)<=a || (c+a)<=b)
                printf("Case %ld: Invalid\n",i);
            else if(a<=0 || b<=0 || c<=0)
                printf("Case %ld: Invalid\n",i);
            else if(a==b && b==c)
                printf("Case %ld: Equilateral\n",i);
            else if(a==b || b==c || c==a)
                printf("Case %ld: Isosceles\n",i);
            else
                printf("Case %ld: Scalene\n",i);
            i++;
        }
    }
    return 0;
}
