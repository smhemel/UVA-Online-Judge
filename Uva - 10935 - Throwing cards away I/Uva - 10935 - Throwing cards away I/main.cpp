//
//  main.cpp
//  Uva - 10935 - Throwing cards away I
//
//  Created by S M HEMEL on 6/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n)
    {
        if(n==1){
            printf("Discarded cards:\n");
            printf("Remaining card: 1\n");
            continue;
        }
        queue <int> q;
        vector <int> v;
        for(int i=1; i<=n; i++)
            q.push(i);
        bool flag = true;
        int w=0;
        while(true){
            if(flag){
                w = q.front();
                q.pop();
                v.push_back(w);
                flag = false;
            }
            else{
                flag = true;
                w = q.front();
                q.pop();
                q.push(w);
            }
            if((int)q.size()==1)
                break;
        }
        printf("Discarded cards: %d",v[0]);
        int len = (int)v.size();
        for(int i=1; i<len; i++)
            printf(", %d",v[i]);
        cout << endl;
        printf("Remaining card: %d\n",q.front());
    }
    
    return 0;
}
