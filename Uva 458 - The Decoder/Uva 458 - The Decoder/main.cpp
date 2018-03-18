//
//  main.cpp
//  Uva 458 - The Decoder
//
//  Created by S M HEMEL on 10/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <cstdio>
using namespace std;

int main()
{
    char c;
    while(scanf("%c",&c) != EOF)
    {
        if(c!='\n')
            printf("%c",c-7);
        else
            printf("\n");
    }
    
    return 0;
}
