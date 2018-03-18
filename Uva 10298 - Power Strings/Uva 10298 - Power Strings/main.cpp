//
//  main.cpp
//  Uva 10298 - Power Strings
//
//  Created by S M HEMEL on 3/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <cstdio>
#include <cstring>
const int N = 1000005;
char str[N];
int next[N];
int main()
{
    while (~scanf("%s", str) && str[0]!='.')
    {
        int len = (int) strlen(str);
        next[0] = next[1] = 0;
        int j = 0;
        for(int i=2; i<=len; i++) {
            while(j && str[i-1]!=str[j])
                j = next[j];
            if(str[i-1]==str[j])
                j++;
            next[i] = j;
        }
        printf("%d\n", len/(len-next[len]));
    }
    return 0;
}
