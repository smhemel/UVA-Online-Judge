//
//  main.cpp
//  Uva 11716 - Digital Fortress
//
//  Created by S M HEMEL on 12/28/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 10002
static char s[N];
static char output[N];
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        gets(s);
        int len = (int)strlen(s);
        int rc = sqrt(len);
        memset(output, 0, sizeof output);
        if(rc*rc == len)
        {
            int k = 0;
            for(int j=0; j<rc; ++j)
                for(int i=j; i<len; i=i+rc)
                    output[k++] = s[i];
            puts(output);
        }
        else
            puts("INVALID");
    }
    return 0;
}
