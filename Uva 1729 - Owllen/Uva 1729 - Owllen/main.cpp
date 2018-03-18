//
//  main.cpp
//  Uva 1729 - Owllen
//
//  Created by S M HEMEL on 16/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
string s;
int arr[200];
int main(){
    ios_base::sync_with_stdio(0);
    int test;
    cin >> test;
    cin.ignore();
    for(int t=1; t<=test; t++){
        getline(cin ,s);
        for(int i=0; s[i]; i++)
            arr[s[i]]++;
        int ans = 1e9;
        for(int i=97; i<=122; i++)
            ans = min(ans,arr[i]);
        printf("Case %d: %d\n",t,ans);
        memset(arr,0,sizeof(arr));
    }
    return 0;
}
