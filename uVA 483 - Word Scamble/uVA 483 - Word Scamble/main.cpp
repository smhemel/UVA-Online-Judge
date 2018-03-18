//
//  main.cpp
//  uVA 483 - Word Scamble
//
//  Created by S M HEMEL on 10/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char line[10000];
    int len,br;
    while(gets(line))
    {
        br=-1;
        len = (int)strlen(line);
        for(int i=0;i<len;i++)
        {
            if(line[i]==' ')
            {
                for(int j=i-1;j>br;j--)
                    printf("%c",line[j]);
                printf(" ");
                br=i;
            }
        }
        for(int k=len-1;k>br;k--)
            printf("%c",line[k]);
        printf("\n");
    }
    return 0;
}
