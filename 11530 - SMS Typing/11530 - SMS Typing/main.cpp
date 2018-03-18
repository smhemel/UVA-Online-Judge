//
//  main.cpp
//  11530 - SMS Typing
//
//  Created by S M HEMEL on 10/12/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int message(char x)
{
    if((x=='a') || (x=='d') || (x=='g') || (x=='j') || (x=='m') || (x=='p') || (x=='t') || (x=='w') || (x==' ')) return 1;
    if((x=='b') || (x=='e') || (x=='h') || (x=='k') || (x=='n') || (x=='q') || (x=='u') || (x=='x')) return 2;
    if((x=='c') || (x=='f') || (x=='i') || (x=='l') || (x=='o') || (x=='r') || (x=='v') || (x=='y')) return 3;
    if((x=='s') || (x=='z')) return 4;
}

int main()
{
    char s[1000];
    int n;
    cin >> n;
    getchar();
    int l = 1;
    while (n--)
    {
        gets(s);
        int sum = 0;
        int m = (int) strlen(s);
        for (int i=0; i<m; i++)
            sum = sum + message(s[i]);
        cout << "Case #" << l <<": "<< sum <<endl;
        l++;
    }
    return 0;
}
