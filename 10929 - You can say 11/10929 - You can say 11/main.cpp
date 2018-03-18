//
//  main.cpp
//  10929 - You can say 11
//
//  Created by S M HEMEL on 10/7/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int s;
    char n[1050];
    while(1)
    {
        s=0;
        gets(n);
        int m =(int)strlen(n);
        for(int j=0;j<m;j++)
        {
            s=s*10+n[j]-'0';
            s=s%11;
        }
        if(s==0 && m==1)
            break;
        else if(s==0)
            printf("%s is a multiple of 11.\n",n);
        else
            printf("%s is not a multiple of 11.\n",n);
    }
    return 0;
}
