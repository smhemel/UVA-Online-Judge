//
//  main.cpp
//  Uva 11830 - Contract Revision
//
//  Created by S M HEMEL on 2/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
char s[200];
int main()
{
    char c;
    while (cin >> c)
    {
        cin >> s;
        int len = (int) strlen(s);
        if(c=='0' && (len=1 && s[0]=='0')) break;
        bool flag = true;
        for(int i=0; i<len; i++)
        {
            if(s[i]==c)
                s[i] = '0';
            if(s[i]!= '0')
                flag = false;
        }
        if(flag==true)
            cout << "0" << endl;
        else
        {
            for(int i=0; i<len; i++)
                if(s[i]!='0')
                    cout << s[i];
            cout << endl;
        }
        memset(s,0,sizeof(s));
    }
    return 0;
}
