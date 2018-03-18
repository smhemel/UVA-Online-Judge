//
//  main.cpp
//  Uva 11571
//
//  Created by S M HEMEL on 10/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#define pi 3.14159265359
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long double A,B,C;
        cin>>A>>B>>C;
        long double Cp = (A*A-C)/2.0,a = -A,b=Cp,c=-B;
        long double Q = (a*a - 3*b)/9.0 , R = (2*a*a*a-9*a*b+27*c)/54 ,M = (R*R-Q*Q*Q);
        if(M>0)
            cout<<"No solution."<<endl;
        else
        {
            long double theta = acos(R/sqrt(Q*Q*Q));
            long double x = (-1*cos(theta/3.0)*2*sqrt(Q))-a/3.0 ,y = (-1*cos((theta+2*pi)/3.0)*2*sqrt(Q))-a/3.0,z = (-1*cos((theta-2*pi)/3.0)*2*sqrt(Q))-a/3.0;
            if(x!=y&&y!=z&&z!=x)
            {
                if(x>y)
                    swap(x,y);
                if(y>x)
                    swap(y,z);
                if(x>y)
                    swap(x,y);
                printf("%.0Lf %.0Lf %.0Lf\n",x,y,z);
            }
            else
                cout<<"No solution."<<endl;
            
        }
        
        
    }
    return 0;
}

