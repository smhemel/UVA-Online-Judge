//
//  main.cpp
//  Uva 11559 - Event Planning
//
//  Created by S M HEMEL on 19/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int per,budget,H,W,p,ans,cap;
    while(scanf("%d%d%d%d",&per,&budget,&H,&W) == 4){
        ans = budget+1;
        for(int i = 0;i < H;++i){
            scanf("%d",&p);
            cap = 0;
            for(int j = 0,x;j < W;++j){
                scanf("%d",&x);
                cap = max(cap,x);
            }
            if(cap >= per) ans = min(ans,per * p);
        }
        if(ans == budget+1) puts("stay home");
        else printf("%d\n",ans);
    }
    
    return 0;
}
