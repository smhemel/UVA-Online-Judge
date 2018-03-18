//
//  main.cpp
//  Uva - 12554 - A Special "Happy Birthday" Song!!!
//
//  Created by S M HEMEL on 1/24/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    char s[100][100];
    char c[16][100]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    while(cin >> n)
    {
        int k=0,p=1;
        for(int i=0;i<n;i++)
            cin >> s[i];
        if(n>16)
            p = ceil(n/16)+1;
        for(int j=0,i=0; j<16*p; j++,i++,k++)
        {
            if(i==n)
                i=0;
            if(j==16)
                k=0;
            printf("%s: %s\n",s[i],c[k]);
        }
    }
    return 0;
}
