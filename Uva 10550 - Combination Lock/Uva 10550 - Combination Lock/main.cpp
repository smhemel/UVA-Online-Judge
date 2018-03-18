//
//  main.cpp
//  Uva 10550 - Combination Lock
//
//  Created by S M HEMEL on 11/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int c, c1, c2, c3;
    while (cin >> c >> c1 >> c2 >> c3)
    {
        printf("%d\n", 1080 + ((c-c1+40)%40 + (c2-c1+40)%40 + (c2-c3+40)%40)*9);
    }
    
    return 0;
}
