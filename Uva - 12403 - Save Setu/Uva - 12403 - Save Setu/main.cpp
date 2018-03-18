//
//  main.cpp
//  Uva - 12403 - Save Setu
//
//  Created by S M HEMEL on 10/9/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long current,money,n;
    string s;
    current=0;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin >> s;
        if(s=="donate")
        {
            cin>>money;
            current+=money;
        }
        else
            cout<<current<<endl;
    }
    return 0;
}
