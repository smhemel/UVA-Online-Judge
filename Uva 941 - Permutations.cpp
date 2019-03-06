//
//  main.cpp
//  Uva 941 - Permutations
//
//  Created by S M HEMEL on 2/1/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permutate(char *s,int i,int len,int n,int n1)
{
    if(i==len) {
        cout << s <<endl;
    }
    else
    {
        for(int j=i; j<=len; j++) {
            swap(s+i,s+j);
            permutate(s,i+1,len,n,n1);
            swap(s+i, s+j);
        }
    }
}
int main()
{
    int test,n;
    char s[100];
    cin >> test;
    while (test--)
    {
        memset(s,0,sizeof(s));
        cin >> s;
        cin >> n;
        int n1 = 0;
        permutate(s,0,(int)strlen(s)-1,n,n1);
    }
    return 0;
}
