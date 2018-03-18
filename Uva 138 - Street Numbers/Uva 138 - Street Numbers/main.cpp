//
//  main.cpp
//  Uva 138 - Street Numbers
//
//  Created by S M HEMEL on 1/26/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    int x = 6,y = 8,x1,y1,temp = 1;
    cout<<setw(10)<<x<<setw(10)<<y<<endl;
    for(int i=1;i<=9; i++)
    {
        x1 = (6*x)-temp;
        y1 = x+y+x1;
        cout<<setw(10)<<x1<<setw(10)<<y1<<endl;
        temp = x;
        x = x1;
        y = y1;
        
    }
    return 0;
}
