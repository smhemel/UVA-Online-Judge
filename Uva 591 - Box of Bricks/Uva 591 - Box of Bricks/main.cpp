//
//  main.cpp
//  Uva 591 - Box of Bricks
//
//  Created by S M HEMEL on 11/1/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,a[1000],sum,avr,test=1,ans;
    while (cin >> n)
    {
        if(n==0) break;
        sum = 0,avr=0,ans=0;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        avr = sum/n;
        for(int i=0;i<n;i++)
            if(a[i]>avr)
                ans=ans+(a[i]-avr);
        cout <<"Set #"<< test <<endl<<"The minimum number of moves is "<< ans <<"."<<endl<<endl;
        test++;
    }
    return 0;
}
