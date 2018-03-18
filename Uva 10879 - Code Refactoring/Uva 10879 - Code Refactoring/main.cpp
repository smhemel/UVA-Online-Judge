//
//  main.cpp
//  Uva 10879 - Code Refactoring
//
//  Created by S M HEMEL on 5/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long int test,n;
    int t=0;
    cin >> test;
    while (test--)
    {
        t++;
        cin >> n;
        printf("Case #%d: %lu =",t,n);
        int root = sqrt(n)+1;
        bool f = true,f1 = false;
        for(unsigned long int i=root; i>=1; i--){
            if(!(n%i)){
                if(f){
                    f = false;
                    printf(" %lu * %lu =",i,(unsigned long int)(n/i));
                }
                else{
                    f1 = true;
                    printf(" %lu * %lu\n",i,(unsigned long int)(n/i));
                    break;
                }
            }
            if(f1)
                break;
        }
        if(f){
            printf(" %lu * 0\n",n);
        }
    }
    return 0;
}
