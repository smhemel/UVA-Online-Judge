//
//  main.cpp
//  Uva 13135 - Homework
//
//  Created by S M HEMEL on 2/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
map < int , int > ways;
void store()
{
    for(int i=0; ; i++)
    {
        int ans = (i+2)*(i+1)/2;
        if(ans > 50000000)
            break;
        ways[ans] = i;
    }
}
int main()
{
    store();
    int n;
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        if(ways.count(m))
            cout << ways[m] << endl;
        else
            cout << "No solution" << endl;
    }
    return 0;
}
