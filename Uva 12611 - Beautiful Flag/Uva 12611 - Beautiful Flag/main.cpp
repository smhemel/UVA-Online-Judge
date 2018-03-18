//
//  main.cpp
//  Uva 12611 - Beautiful Flag
//
//  Created by S M HEMEL on 1/22/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int t=1; t<=test; t++)
    {
        int r;
        cin >> r;
        float h = (r/2);
        printf("Case %d:\n",t);
        //int full_d = h*6;
        //int full_l = h*10;
        printf("-%.0f %.0f\n%.0f %.0f\n%.0f -%.0f\n-%.0f -%.0f\n",4.5*h,h*3,h*5.5,h*3,h*5.5,h*3,4.5*h,h*3);
    }
    return 0;
}
