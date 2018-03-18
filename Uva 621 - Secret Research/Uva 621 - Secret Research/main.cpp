//
//  main.cpp
//  Uva 621 - Secret Research
//
//  Created by S M HEMEL on 27/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <cstdio>
#include <cstring>
using namespace std;
char s[2000];
int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        scanf("%s", s);
        int len = (int)strlen(s);
        if (strcmp(s, "1") == 0 || strcmp(s, "4") == 0 || strcmp(s, "78") == 0)
            puts("+");
        else if (s[len - 1] == '5' && s[len - 2] == '3')
            puts("-");
        else if (s[0] == '9' && s[len - 1] == '4')
            puts("*");
        else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
            puts("?");
        else
            puts("+");
    }
    return 0;
}
