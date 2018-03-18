//
//  main.cpp
//  11777-Automate the Grades
//
//  Created by S M HEMEL on 9/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int t1,t2,f,at,ct1,ct2,ct3,c = 0,n;
    while(scanf("%d",&n)==1)
    {
        for(int i=1;i<=n;i++)
        {
            cin >> t1>>t2>>f>>at>>ct1>>ct2>>ct3;
            if(ct1<=ct2 && ct1<=ct3)
                c=(ct2+ct3)/2;
            else if(ct2<=ct1 && ct2<=ct3)
                c=(ct1+ct3)/2;
            else if(ct3<=ct1 && ct3<=ct2)
                c=(ct1+ct2)/2;
            int d = t1+t2+f+at+c;
            if(d>=90)
                printf("Case %d: A\n",i);
            else if(d>=80)
                printf("Case %d: B\n",i);
            else if(d>=70)
                printf("Case %d: C\n",i);
            else if(d>=60)
                printf("Case %d: D\n",i);
            else if(d<60)
                printf("Case %d: F\n",i);
        }
    }
    return 0;
}
