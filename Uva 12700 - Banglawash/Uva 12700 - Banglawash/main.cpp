//
//  main.cpp
//  Uva 12700 - Banglawash
//
//  Created by S M HEMEL on 1/20/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int cas,no=1;
    cin >> cas;
    while(cas--)
    {
        int n,w=0,a=0,b=0,t=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; s[i]; i++)
        {
            if(s[i]=='W') w++;
            else if(s[i]=='A') a++;
            else if(s[i]=='B') b++;
            else if(s[i]=='T') t++;
        }
        printf("Case %d: ",no);
        if(a==n)
        {
            printf("ABANDONED\n");
        }
        else if(b==n || (b+a==n))
        {
            printf("BANGLAWASH\n");
        }
        else if(w==n || (w+a==n))
        {
            printf("WHITEWASH\n");
        }
        else if(w>b)
        {
            printf("WWW %d - %d\n",w,b);
        }
        else if(w<b)
        {
            printf("BANGLADESH %d - %d\n",b,w);
        }
        else if(w==b)
        {
            printf("DRAW %d %d\n",b,t);
        }
        no++;
    }
    cout << endl;
    return 0;
}
