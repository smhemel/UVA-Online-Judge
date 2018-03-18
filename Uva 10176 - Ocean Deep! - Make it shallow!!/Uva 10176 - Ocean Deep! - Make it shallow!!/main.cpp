//
//  main.cpp
//  Uva 10176 - Ocean Deep! - Make it shallow!!
//
//  Created by S M HEMEL on 11/12/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
char* res[2] = {"NO","YES"};
int main()
{
    int p=131071,mod=0;
    char c;
    while((c=getchar())!=EOF)
    {
        if(c=='#')
        {
            puts(res[!mod]);
            mod = 0;
        }
        else if(c!='\n')
            mod = (mod*2 + c-'0')%p;
    }
    return 0;
}
