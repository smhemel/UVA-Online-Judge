//
//  main.cpp
//  Uva 11839 - Optical Reader
//
//  Created by S M HEMEL on 2/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n)
    {
        while (n--)
        {
            int position = 0,count = 0,x;
            for(int i=0; i<5; i++) {
                cin >> x;
                if(x<=127 && x>=0){
                    count++;
                    position = i;
                }
                else if(x>255)
                {
                    count=3;
                }
            }
            if(count==1)
                printf("%c\n",(65+position));
            else
                puts("*");
        }
    }
    return 0;
}
