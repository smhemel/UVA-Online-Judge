//
//  main.cpp
//  uva 10035 - Primary Arithmetic
//
//  Created by S M HEMEL on 9/18/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned long int a,b;
    int count,c;
    while((cin >> a >> b))
    {
        if (a==0 && b==0) break;
        count = c = 0;
        while(a||b)
        {
            c=(a%10+b%10+c)/10;
            a=a/10,b=b/10;
            count= count+c;
        }
        if(count==0)
            cout << "No carry operation." <<endl;
        else if(count==1)
            cout << "1 carry operation." <<endl;
        else
            cout << count <<" carry operations." <<endl;
    }
    return 0;
}
