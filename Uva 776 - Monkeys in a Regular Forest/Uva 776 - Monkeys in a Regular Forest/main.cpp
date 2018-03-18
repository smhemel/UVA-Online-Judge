//
//  main.cpp
//  Uva 776 - Monkeys in a Regular Forest
//
//  Created by S M HEMEL on 2/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//


#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include <map>
using namespace std;
char str[101][101];
int dr[]={-1, 0, 1,1,1,0,-1,-1};
int dc[]={-1,-1,-1,0,1,1, 1, 0};
bool check[128];
int store[1000];
int main()
{
    while(true)
    {
        memset(check,0,sizeof(check));
        memset(str,0,sizeof(str));
        memset(store,0,sizeof(store));
        int row = 0;
        while(gets(str[row])) {
            if(str[row][0]=='%' || str[row][0]=='\0') break;
            row++;
        }
        for(int i=0; i<row; i++)
            cout << str[i] << endl;
        int num = 1;
        for(int i=0; i<row; i++)
        {
            int len = (int)strlen(str[i]);
            for(int l=0; l<len; l+=2)
            {
                if(check[str[i][l]]==0) {
                    check[str[i][l]] = 1;
                    store[str[i][l]] = num;
                    num++;
                }
                    
            }
        }
        for(int i=0; i<row; i++)
            for(int l=0; l<(int) strlen(str[i]); l++){
                if(str[i][l]!=' ')
                    str[i][l] = store[str[i][l]]+'0';
            }
        for(int i=0; i<row; i++)
            cout << str[i] << endl;
        cout << "%" <<endl;
    }
    return 0;
}
