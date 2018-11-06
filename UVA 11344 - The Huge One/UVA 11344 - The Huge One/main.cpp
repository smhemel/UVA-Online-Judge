//
//  main.cpp
//  UVA 11344 - The Huge One
//
//  Created by S M HEMEL on 21/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    char num[1005];
    int x, y, n;
    scanf("%*d");
    while(scanf("%s",num) == 1) {
        scanf("%d", &n);
        int flag = 0;
        for(int i=0; i<n; i++) {
            scanf("%d", &x);
            y = 0;
            if(!flag)
                for(int j = 0; num[j]; j++)
                    static_cast<void>(y = y*10 + num[j]-'0'), y %= x;
            if(y)
                flag = 1;
        }
        printf("%s - ", num);
        if(flag) puts("Simple.");
        else puts("Wonderful.");
    }
    return 0;
}
