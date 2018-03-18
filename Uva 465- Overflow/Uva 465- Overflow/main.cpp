//
//  main.cpp
//  Uva 465- Overflow
//
//  Created by S M HEMEL on 11/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#define N 2147483647
using namespace std;
int main()
{
    char s1[1000],s2[1000];
    long double a,b;
    char c;
    while(cin>>s1>>c>>s2)
    {
        a = atof(s1);
        b = atof(s2);
        cout<<s1<<" "<<c<<" "<<s2<<endl;
        if(a>N)
            cout<<"first number too big"<<endl;
        if(b>N)
            cout<<"second number too big"<<endl;
        if(c=='+' && (a+b)>N)
            cout<<"result too big"<<endl;
        if(c=='*' && (a*b)>N)
            cout<<"result too big"<<endl;
    }
    return 0;
}
