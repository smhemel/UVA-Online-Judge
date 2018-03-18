//
//  main.cpp
//  371 Ackermann Functions
//
//  Created by S M HEMEL on 10/8/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<algorithm>
#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    long long a,b,c,Max,Gn = 0;
    while((cin >> a >> b))
    {
        Max = 0;
        if(a==0||b==0)
            break;
        if(a>b)
            swap(a,b);
        for(long long i=b;i>=a;i--)
        {
            long long x = i;
            c = 1;
            if(x%2==0)
                x/=2;
            else
                x=3*x+1;
            while(x!=1)
            {
                if(x%2==0){
                    x/=2;
                    c++;
                }
                else{
                    x=3*x+1;
                    c++;
                }
                
            }
            if(c>=Max)
            {
                Max=c;
                Gn=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,Gn,Max);
    }
    return 0;
}
