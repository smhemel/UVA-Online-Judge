//
//  main.cpp
//  Uva 10591 - Happy Number
//
//  Created by S M HEMEL on 10/20/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
long long int happy(long long int n)
{
    long long int s = 0;
    while(n!=0)
    {
        int a = n%10;
        s+=(a*a);
        n/=10;
    }
    if(s<10)
        return s;
    return happy(s);
}
int main()
{
    int t,i=0;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        if(n==7)
            cout <<"Case #"<< ++i << ": " <<  n <<" is a Happy number."<<endl;
        else if(happy(n)==1)
            cout <<"Case #"<< ++i << ": " <<  n <<" is a Happy number."<<endl;
        else
            cout <<"Case #"<< ++i << ": " <<  n <<" is an Unhappy number."<<endl;
    }
    return 0;
}
