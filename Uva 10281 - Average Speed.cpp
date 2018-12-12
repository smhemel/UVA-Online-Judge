//
//  main.cpp
//  Uva 10281 - Average Speed
//
//  Created by S M HEMEL on 2/4/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <sstream>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cctype>
#include <cstdio>
using namespace std;
double convert(string s)
{
    stringstream ss(s);
    double speed;
    ss >> speed;
    return speed;
}
int main()
{
    double last = 0.0;
    double dis = 0.0, speed = 0.0;
    string temp;
    while(getline(cin, temp))
    {
        stringstream ss(temp);
        string str = "", s = "";
        ss >> str >> s;
        double curr  = ((str[0]-'0')*10 + (str[1]-'0'))/1.0;
        curr += ((str[3]-'0')*10 + (str[4]-'0'))/60.0;
        curr += ((str[6]-'0')*10 + (str[7]-'0'))/3600.0;
        dis  += (speed *(curr-last));
        last = curr;
        if ( s == "" )
            printf("%s %2.2lf km\n", str.c_str(), dis);
        else {
            speed = convert(s);
        }
    }
    return 0;
}
