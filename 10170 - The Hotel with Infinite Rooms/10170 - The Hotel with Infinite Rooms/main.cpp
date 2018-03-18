//
//  main.cpp
//  10170 - The Hotel with Infinite Rooms
//
//  Created by S M HEMEL on 10/1/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    long a,b,sum;
    while((cin >> a >> b))
    {
        sum = 0;
        for(long i=a;;i++)
        {
            sum += i;
            if(sum>b || sum==b)
            {
                cout << i <<endl;
                break;
            }
        }
    }
    return 0;
}
