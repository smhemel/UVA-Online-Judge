//
//  main.cpp
//  Uva 117 - The Postal Worker Rings Once
//
//  Created by S M HEMEL on 5/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;
string s;
int main() {
    while(cin >> s)
    {
        int map[26][26] = {}, i, j, k,deg[26] = {}, len, sum = 0;
        memset(map, 63, sizeof(map));
        len = (int)s.size();
        static_cast<void>(i = s[0]-'a'), j = s[len-1]-'a';
        map[i][j] = min(len, map[i][j]);
        map[j][i] = min(len, map[j][i]);
        deg[i]++;deg[j]++;
        sum += len;
        while(cin >> s) {
            if(s == "deadend") break;
            len = (int)s.size();
            static_cast<void>(i = s[0]-'a'), j = s[len-1]-'a';
            map[i][j] = min(len, map[i][j]);
            map[j][i] = min(len, map[j][i]);
            deg[i]++;deg[j]++;
            sum += len;
        }
        int idx = 0, odeg[2];
        for(i=0; i<26; i++)
            if(deg[i]&1)
                odeg[idx++] = i;
        if(idx) {
            for(k=0; k<26; k++)
                for(i=0; i<26; i++)
                    for(j=0; j<26; j++)
                        map[i][j] = min(map[i][j], map[i][k]+map[k][j]);
            sum += map[odeg[0]][odeg[1]];
        }
        printf("%d\n", sum);
    }
    return 0;
}
