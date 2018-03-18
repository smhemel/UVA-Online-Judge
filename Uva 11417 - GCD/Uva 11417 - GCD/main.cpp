//
//  main.cpp
//  Uva 11417 - GCD
//
//  Created by S M HEMEL on 10/21/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int gcd(int a,int b);
int main()
{
    int sum=0,n=0;
    while(cin >> n)
    {
        if(n==0)
            break;
        sum=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++)
                sum+=gcd(i,j);
        }
        cout << sum <<endl;
    }
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
