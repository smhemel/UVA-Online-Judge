//
//  main.cpp
//  Uva 13034 - Solve Everything
//
//  Created by S M HEMEL on 1/21/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <stdio.h>
int main()
{
    int testcase, cases = 0;
    scanf("%d", &testcase);
    while (testcase--)
    {
        int x, ret = 1;
        for(int i=0; i<13; i++){
            scanf("%d", &x), ret &= x>0;
        }
        printf("Set #%d: %s\n", ++cases, ret ? "Yes" : "No");
    }
    return 0;
}
