//
//  main.cpp
//  Uva 10633 - Rare Easy Problem
//
//  Created by S M HEMEL on 11/13/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n,y,x;
    while(cin >> n)
    {
        if(n==0)
            break;
        else
        {
            if(n>9)
            {
                y=(n*10)/9;
                x=y-1;
                if(n%9==0)
                    cout << x <<" "<< y <<endl;
                else
                    cout << y <<endl;
            }
        }
    }
    return 0;
}
