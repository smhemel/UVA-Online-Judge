//
//  main.cpp
//  Uva 763- Fibinary Numbers
//
//  Created by S M HEMEL on 11/18/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//



#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
#define N 10240
int sum[(N+N+2)];
int main()
{
    int T=0,stage;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        if(T>0) cout<<endl;
        T++;
        stage=1;
        memset(sum, 0, sizeof(sum));
        int len = (int) s1.size();
        int len1 = (int) s2.size();
        int Max = max(len,len1);
        for(int i=0; i<len; sum[len-i-1] = (s1[i]-'0'),i++);
        for(int i=0; i<len1; sum[len1-i-1] += (s2[i]-'0'),i++);
        while(stage==1) {
            stage=2;
            for(int i=0; i<Max; i++) {
                if(sum[i]>=1 && sum[i+1]>=1)
                    sum[i]--,sum[i+1]--,sum[i+2]++,stage=1;
                else if(sum[i]>=2 && i>1)
                    sum[i]--,sum[i]--,sum[i+1]++,sum[i-2]++,stage=1;
                else if(sum[1]>=2)
                    sum[1]-=2,sum[2]++,sum[0]++,stage=1;
                else if(sum[0]>=2)
                    sum[0]-=2,sum[1]++,stage=1;
            }
        }
        stage=1;
        for(int i=Max; i>=0; i--) {
            if(stage==1)
                if(sum[i]>=1) stage=2;
            if(stage==2) cout<<sum[i];
        }
        if(stage==1)
            cout<<"0";
        stage=2;
        cout<<endl;
    }
    return 0;
}

