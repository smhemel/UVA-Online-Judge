//
//  main.cpp
//  Uva 10490 - Mr. Azad and his Son!!!!!
//
//  Created by S M HEMEL on 3/6/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
bool flag;
void prime(long long int m)
{
    for(int i=2; i<=m/2; i++)
        if(!(m%i)) flag = false;
}
int main()
{
    int n;
    while (cin >> n && n)
    {
        if(n==11 || n==23 || n==29)
        {
            cout<<"Given number is prime. But, NO perfect number is available." << endl;
            continue;
        }
        flag = true;
        prime(n);
        if(!flag){
            printf("Given number is NOT prime! NO perfect number is available.\n");
            continue;
        }
        long long int m = pow(2,(n-1))*(pow(2,n)-1);
        printf("Perfect: %lld!\n",m);
    }
    return 0;
}
