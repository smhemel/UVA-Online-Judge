//
//  main.cpp
//  Uva 11192 - Group Reverse
//
//  Created by S M HEMEL on 11/10/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int len,d,a,n;
    char s[1000];
    while(cin >> n)
    {
        if(n==0) break;
        scanf(" ");
        gets(s);
        len = (int)strlen(s);
        d=len/n;
        for(int i=1;i<=n;i++)
        {
            a=i*d;
            for(int j=a-1;j>=a-d;j--)
                cout << s[j];
        }
        cout <<endl;
    }
    return 0;
}
