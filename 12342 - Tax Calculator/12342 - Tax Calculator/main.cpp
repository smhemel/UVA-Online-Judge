//
//  main.cpp
//  12342 - Tax Calculator
//
//  Created by S M HEMEL on 9/8/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    long long int n,t,i=1;
    double k,r = 0.0;
    cin>>t;
    
    while(t--)
    {
        cin>>k;
        
        if(k<=180000.0)
            r=0.0;
        else
            if(k>180000.0&&k<=480000.0)
                r=(k-180000.0)*0.1;
        
            else
                if(k>480000.0&&k<=880000.0)
                    r=((k-480000.0)*0.15)+30000.0;
        
                else
                    if(k>880000.0&&k<=1180000.0)
                        r=((k-880000.0)*0.2)+90000.0;
        
                    else
                        if(k>1180000)
                            r=((k-1180000.0)*0.25)+150000.0;
        
        
        if(r>0.0&&r<2000.0)
            r=2000.0;
        n = ceil(r);
        cout<<"Case "<<i++<<": "<<r<<endl;
        
    }
    return 0;
}
