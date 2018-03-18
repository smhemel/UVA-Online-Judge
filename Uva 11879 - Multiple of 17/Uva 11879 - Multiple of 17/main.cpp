//
//  main.cpp
//  Uva 11879 - Multiple of 17
//
//  Created by S M HEMEL on 8/28/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,sum,rem,l;
    char s[1000];
    while(1)
    {
        rem=0;
        cin >> s;
        l=(int) strlen(s);
        if(l==1 && s[0]=='0')
            break;
        for(i=0;i<l;i++)
        {
            sum=rem*10+(s[i]-'0');
            rem=sum%17;
        }
        if(rem==0)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
