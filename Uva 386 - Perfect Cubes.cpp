//
//  main.cpp
//  Uva 386 - Perfect Cubes
//
//  Created by S M HEMEL on 2/3/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    for(int i=6; i<=200; i++)
    {
        long int x = i*i*i;
        for(int l = 2; l<i; l++)
        {
            long int x1 = l*l*l;
            for(int l1 = l+1; l1<i; l1++)
            {
                long int x2 = l1*l1*l1;
                for (int l2 = l1+1; l2<i; l2++)
                {
                    long int x3 = l2*l2*l2;
                    if(x1+x2+x3==x)
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",i,l,l1,l2);
                }
            }
        }
    }
    return 0;
}
