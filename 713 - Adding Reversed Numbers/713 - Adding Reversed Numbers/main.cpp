//
//  main.cpp
//  713 - Adding Reversed Numbers
//
//  Created by S M HEMEL on 9/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    
    char a[250],b[250];
    long long m[250];
    long long n,j,l1,l2,len1,len2,sum,c,x,k;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        len1 = strlen (a);
        len2 = strlen (b);
        
        if(len1>len2)
        {
            l1 = len1;
            l2 = len2;
        }
        else
        {
            l1 = len2;
            l2 = len1;
        }
        x = 0, c = 0;
        for(j=0; j<l2; j++)
        {
            sum  = (a[j]-'0')+(b[j]-'0') + x;
            m[c] = sum%10;
            x    = sum/10;
            c++;
        }
        if(len1>len2)
        {
            for(j=l2; j<l1; j++)
            {
                sum = (a[j]-'0')+x;
                m[c]= sum%10;
                x   = sum/10;
                c++;
            }
        }
        else
        {
            for(j=l2; j<l1; j++)
            {
                sum = (b[j]-'0')+x;
                m[c]= sum%10;
                x   = sum/10;
                c++;
            }
        }
        while(x)
        {
            m[c]= x%10;
            x   = x/10;
            c++;
        }
        for(k=0; k<c; k++)
        {
            if(m[k]!=0)
                break;
        }
        for(j=k; j<c; j++)
        {
            cout<<m[j];
        }
        cout<<endl;
    }
    return 0;
}


