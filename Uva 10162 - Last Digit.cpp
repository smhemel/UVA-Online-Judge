//
//  main.cpp
//  Uva 10162 - Last Digit
//
//  Created by S M HEMEL on 2/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <cstdio>
#include <cstring>
int main() {
    //Last Digit (1*1)+(2*2)+(3*3)+....+(n*n)
    int ans[101] = {0, 1, 5, 2, 8, 3, 9, 2, 8, 7, 7, 8, 4, 7, 3, 8, 4, 1, 5,
        4, 4, 5, 9, 6, 2, 7, 3, 6, 2, 1, 1, 2, 8, 1, 7, 2, 8, 5, 9, 8, 8, 9,
        3, 0, 6, 1, 7, 0, 6, 5, 5, 6, 2, 5, 1, 6, 2, 9, 3, 2, 2, 3, 7, 4, 0,
        5, 1, 4, 0, 9, 9, 0, 6, 9, 5, 0, 6, 3, 7, 6, 6, 7, 1, 8, 4, 9, 5, 8,
        4, 3, 3, 4, 0, 3, 9, 4, 0, 7, 1, 0, 0};
    char n[101];
    while (scanf("%s", n) != EOF && strcmp(n, "0")) {
        int len = (int) strlen(n), index;
        if (len == 1) index = n[0] - '0';
        else
            index = (n[len-2] - '0') * 10 + (n[len - 1] - '0');
        printf("%d\n", ans[index]);
    }
    return 0;
}
